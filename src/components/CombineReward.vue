<template>
  <div>
    <img style="margin-left:40%;" alt="" width="20%" srcset="../../static/pic/组合奖励主图.png"/>
    <div class="titletext">整版纪念币奖励</div></br>
    <div style="margin-left:20%;" width="60%">
目前集齐整版纪念币的收藏家们可共同获得累计奖池   EOS奖励</br>
如本期无收藏家领取，奖池将自动累计到下一期</br>
领取后将于北京时间晚上12:00自动发放，目前已集齐整版并申请领取的收藏家有   名</br>
如集齐整版纪念币的收藏家不打算本期领取奖励，可选择以后领取，每24小时为一期。</br>
    </div>
</br>
    <router-link class="gotoShop button is-medium"
                  :to="{ name: 'PreSale' }">领取</router-link>
</br>
</br>
规则说明</br>
1.总计29种收藏奖励，分为整版纪念币奖励，6种整版大类纪念币奖励和22种整版单版纪念币奖励；</br>
2.集全整版纪念币以EOS币作为奖励，奖励是浮动的，取决于本游戏每日的收益，奖励由游戏每日挖矿收入的10%和拍卖手续费收入的10%两部分组成，如本期没收藏家领取，则奖励自动累加到下一期，领取后北京时间晚上12:00发放；</br>
3.集全6种整版大类纪念币和22种整版单版纪念币以游戏通证作为奖励，即领即取，先兑先得，游戏设定有通证回购机制，当通证奖励兑换完后，收藏家可等到系统中回购到通证后再兑换；</br>
4.各种收藏奖励之间互不冲突，如收藏家领取了整版单版纪念币后依然持有，在以后齐全其他整版单版纪念币后依然可以领取整版大类纪念币奖励；如收藏家领取了整版大类纪念币奖励后依然持有，在以后集全其他整版大类纪念币，依然可以领取整版纪念币奖励；</br>
5.因游戏设有纪念币兑换机制，为保证游戏公平公正运行，设定了奖励防作弊机制，如收藏家在集齐一套整版比特币纪念币，在领取一次整版比特币纪念币通证奖励后，只有当同时拥有两套整版比特币纪念币时，才能再次领取整版比特币纪念币通证奖励。</br>
</br>
    <div style="margin-left:20%;margin-right:20%;" width="60%">
      <nav class="pagination is-centered" role="navigation" aria-label="pagination">
        <a class="pagination-previous">Previous</a>
        <a class="pagination-next">Next page</a>
        <ul class="pagination-list">
          <li><a class="pagination-link" aria-label="Goto page 1">1</a></li>
          <li><span class="pagination-ellipsis">&hellip;</span></li>
          <li><a class="pagination-link" aria-label="Goto page 45">45</a></li>
          <li><a class="pagination-link is-current" aria-label="Page 46" aria-current="page">46</a></li>
          <li><a class="pagination-link" aria-label="Goto page 47">47</a></li>
          <li><span class="pagination-ellipsis">&hellip;</span></li>
          <li><a class="pagination-link" aria-label="Goto page 86">86</a></li>
        </ul>
      </nav>
    </div>
  </div>
</template>

<script>
export default {
  name: 'combinereward',
  data () {
    return {

    }
  }
}
</script>

<style scoped>
.gotoShop {
  background-image: linear-gradient(-180deg,rgb(116, 114, 103),rgb(37, 37, 59));
  background-size: cover;
  height: 48px;
  width: 20%;
  margin-left: 40%;
  background-color: transparent;
  border-color: transparent;
  color: white;
  border-radius: 24px;
}
.titletext{
  text-align:center;
  font-weight:bold;
  font-size:30px;
}
</style>
