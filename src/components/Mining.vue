<template>
  <div>
    <img style="margin-left:30%;" alt="" width="40%" srcset="../../static/pic/挖矿页面.png"/>
    <section class="section2">
      <div style="padding-left:30%">目前币池可挖数量：1000张，纪念币限量，先到先得</div>
      <div style="padding-left:30%">目前挖矿费：1.0000EOS/张</div>
      </br>
      <img class="minebutton" alt="" srcset="../../static/pic/挖矿页面按钮图1.png"/>
      <img class="minebutton" alt="" srcset="../../static/pic/挖矿页面按钮图2.png"/>
      <img class="minebutton" alt="" srcset="../../static/pic/挖矿页面按钮图3.png"/>
      <img class="minebutton" alt="" srcset="../../static/pic/挖矿页面按钮图4.png"/>
    </section>
  </div>
</template>

<script>
export default {
  name: 'mining',
  data () {
    return {

    }
  }
}
</script>

<style scoped>
.section1 {
  background-image: url("../../static/pic/挖矿页面.png");
  background-size: 100%;
  background-repeat: no-repeat;
  background-color: #fff;
  height: 350px;
  margin-left: 30%;
  margin-right: 30%;
  @media (max-width: 800px) {
    background-size: cover;
  }
}
.section2 {
  background-size: 100%;
  background-repeat: no-repeat;
  background-color: #00e0c6;
  padding-top: 100px;
  padding-bottom: 50px;
  @media (max-width: 800px) {
    background-size: cover;
  }
}
.minebutton {
  padding: 0px;
  width:20%;
  margin-left:40%;
}
</style>
