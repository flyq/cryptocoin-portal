/**
 *  @dev deaso
 *  @copyright Andoromeda
 */
#pragma once
#include <eosiolib/eosio.hpp>
#include <eosiolib/asset.hpp>
#include <eosiolib/contract.hpp>
//#include "../eosio.token/eosio.token.hpp"
#include <cmath>
#include <string>
#include <vector>

typedef double real_type;

using std::string;
using eosio::symbol_name;
using eosio::asset;
using eosio::symbol_type;
using eosio::contract;
using eosio::permission_level;
using eosio::action;

class cryptojinian : public contract{
    public:
        cryptojinian(account_name self):
        contract(self),
        global(_self, _self),
        coins(_self, _self), // _self
        players(_self, _self){}
        void setcoin(const account_name owner, const uint64_t type, const uint64_t value, const uint64_t number);

        void onTransfer(account_name from, account_name to,
                    extended_asset quantity, string memo);        
        void apply(account_name code, action_name action) {
            auto &thiscontract = *this;

            if (action == N(transfer)) {
                auto transfer_data = unpack_action_data<currency::transfer>();
                onTransfer(transfer_data.from, transfer_data.to, extended_asset(transfer_data.quantity, code), transfer_data.memo);
                return;
            }
            if (code != _self) return;
            switch (action) {
                EOSIO_API(cryptojinian, (setcoin));
            };
        }     
        
    private:

        uint64_t randommath(const uint64_t set);

        struct player {
            account_name name;
            checksum256 seed;
            std::vector<uint64_t> coins; // coins, for id

            uint64_t primary_key() const { return name; }
            EOSLIB_SERIALIZE(player, (account)(name)(seed)(coins))
        };
        typedef eosio::multi_index<N(player), player> player_index;
        player_index players;

        struct coin {
            uint64_t id;
            account_name owner;
            uint64_t type;
            uint64_t value;
            uint64_t number;

            uint64_t primary_key() const { return id; }
            EOSLIB_SERIALIZE(coin, (id)(owner)(type)(value)(number))
        };
        typedef eosio::multi_index<N(coin), coin> coin_index;
        round_index coins; 

        struct global {
            uint64_t id = 0;
            checksum256 hash; // hash of the game seed, 0 when idle.
            std::vector<uint64_t> coins; // 1 uint64_t for 64 coins
            std::vector<uint64_t> usedspilt64; // for faster finding
            std::vector<uint64_t> usedspilt6400; // for faster finding
            //example(for uint8_t):
            //coins: [1,9,0,11] ([00000001.00001001,00000000,00001011])
            //remainspilt8: [1,2,0,3]
            //remainspilt16: [3,3]
            uint64_t remainamount; // return remain coin amounts

            uint64_t primary_key() const { return id; }
            EOSLIB_SERIALIZE(global, (id)(hash)(coins)(usedspilt64)(usedspilt6400)) 
        };
        typedef eosio::multi_index<N(global), global> global_index;
        global_index global;
};

extern "C" {
    [[noreturn]] void apply(uint64_t receiver, uint64_t code, uint64_t action) 
    {
        escrow p(receiver);
        p.apply(code, action);
        eosio_exit(0);
    }
}
