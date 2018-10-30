#include <eosiolib/crypto.h>
#include "cryptojinian.hpp"

#include <cstdio>

 // @abi action
void cryptojinian::setcoin(const account_name owner, const uint64_t type, const uint64_t value, const uint64_t number);
    //require_auth( msgsender );
    // auto player = players.find(owner);
    // if(player == players.end()){
    //     coins.emplace(_self, [&](auto &coin) {
    //         coin.id = offers.available_primary_key();
    //         coin.owner = owner;
    //     });
    // } 
    //
    // std::vector<account_name> accounts;
    // for(int i=0;i<players.size();i++){
    //     string k = players[i];
    //     accounts.push_back(eosio::string_to_name(k.c_str()));
    // }

    coins.emplace(_self, [&](auto &coin) {
        coin.id = offers.available_primary_key();
        coin.owner = owner;
        coin.type = type;
        coin.value = value;
        coin.number = number;
    });
    
}

 // @abi action
uint64_t cryptojinian::randommath(const uint64_t set){
    //return random 1-6..
    uint64_t r = set;
    return set;
}

void cryptojinian::onTransfer(account_name from, account_name to, extended_asset quantity, std::string memo) {        
    
    if (to != _self) return;
    
    require_auth(from);
    eosio_assert(quantity.is_valid(), "invalid token transfer");
    eosio_assert(quantity.amount > 0, "must transfer a positive amount");
    
    asset a = asset(quantity.symbol, quantity.amount / 2);
    asset b = asset(quantity.symbol, quantity.amount - quantity.amount / 2);

    if (a.amount > 0) {
        action(
            permission_level{_self, N(active)},
            quantity.contract, N(transfer),
            make_tuple(_self, N(minakokojima), a,
            std::string(""))
        ).send();
    }
    if (b.amount > 0) {
        action(
            permission_level{_self, N(active)},
            quantity.contract, N(transfer),
            make_tuple(_self, N(rukamoemoe51), b,
            std::string(""))
        ).send();
    }
}