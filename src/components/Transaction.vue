<template>
  <div>
    <img style="margin-left:40%;" alt="" width="20%" srcset="../../static/pic/纪念币交易页面拍卖主图.png"/>
    <nav class="level" style="margin-left:20%;width:60%;">
      <div class="level-item">
        <input class="input is-rounded" style="width:100%;" type="text" placeholder="例：1元比特币 500元狗币 1元以太币硬币">
        <a class="button" style="margin-left:5px">提交</a>
        <a class="button" style="margin-left:5px">取消</a>
      </div>
    </nav>
    <a class="button is-rounded" style="margin-left:30%;width:40%;">查看可搜索纪念币</a>
    <div class="columns is-multiline is-mobile" style="padding-left:20%;padding-right:20%;">
      <a @click="enter" v-for="(coin,key) in coins" key="index" class="column is-one-quarter">
        <span style="padding:5px;">
          <div><img alt="" width="100%" :srcset="coin.logourl"/></div>
          <div style="text-align:center">{{coin.name}}</div>
        </span>
      </a>
    </div>
  </div>
</template>

<script>
const allcoins = require("../assets/coins.json");
export default {
  name: 'transaction',
  data () {
    return {
      coins: allcoins,
    }
  },
  methods: {
			enter: function (e) {
        console.log(e.toElement.innerText);
      }
  }
}
</script>

<style scoped>

</style>
