<template>
  <header>
    <nav class="navbar">
      <section class="section1">
        <div class="navbar-brand">
          <div v-for="(page, index) in pages" :key="index">
            <router-link
              class="navbar-item"
                            :to="{ name: page }">
                  {{routes[index]}}
            </router-link>
          </div>
          <!-- <router-link
        class="navbar-item"
                      :to="{ name: 'Transaction', params:{address: me.address} }">
            玩前准备
          </router-link> -->
        </div>
        <div class="navbar-end">
          <div class="navbar-item">
          </div>
        </div>
      </section>
    </nav>
  </header>
</template>

<script>

export default {
  name: 'Header',
  data () {
    return {
      pages: ["HomePage", "Prepare", "Description", "Introduction", "Mining", "Mine", "Transaction", "RankReward", "CombineReward", "GloryReward", "Proof", "Refer", "Airdrop"],
      routes: ["首页","玩前准备","玩法说明","纪念币介绍","挖矿","我的纪念币","纪念币交易","市值排行奖励","组合奖励","衔级奖励","通证","推荐计划","领取空投"]
    }
  }
}
</script>

<style scoped>
.notification {
  margin-bottom: 0;
  font-size: 0.8rem;
  overflow-wrap: break-word;
  word-wrap: break-word;
  word-break: break-all;
}
header {
  position: relative;
}
.navbar {
  background-color: #000000;
  /*background: none;
  position: absolute; */
  top: 0;
  left: 0;
  right: 0;
  padding-left: 30px;
}
/* .sig-home-header .navbar {
  background: rgba(0, 0, 0, 0.5);
  position: absolute;
  top: 0;
  left: 0;
  right: 0;
} */

.navbar-item {
  font-weight: 700;
  padding: 0.7rem;
  /* margin: 0.5rem 2rem; */
  font-size: 1.14rem;
  color: #fff;
}
.navbar-brand {
  padding-top: 400px;
}
a.navbar-item:hover {
  color: #fdda46 !important;
  background-color: transparent !important;
}
.avatar {
  border-radius: 100%;
  margin-right: 8px;
  max-height: 2.9rem;
}
.section1 {
  background-image: url("../static/pic/主页图.png");
  background-size: 100%;
  background-repeat: no-repeat;
  background-color: #000;
  @media (max-width: 800px) {
    background-size: cover;
    padding-left: 1000px;
  }
}
</style>
