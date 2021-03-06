# #114 UV Brick

![](./img/114_uv.jpg)
<!--COLORME-->

## Overview
紫外線センサーを使用したBrickです。I/Oピンより、紫外線の強弱をアナログ値(0〜1023)で取得することができます。

## Connecting
### Arduino
アナログコネクタ(A0〜A5)のいずれかに接続します。

### IchigoJam
アナログ用コネクタ(IN2またはANA()で設定したコネクタ)のどれかに接続します。

## Support
|Arduino|RasPi|IchigoJam|
|:--:|:--:|:--:|
|◯|◯|◯|

## Schematic
![](./img/114_uv_sch.png)

## Docs

* [Arduino用サンプル](http://docs.fabo.io/fabo/arduino/brick_analog/114_brick_analog_uv.html)
* [RaspPi用サンプル](http://docs.fabo.io/fabo/rasppi/brick_analog/114_brick_analog_uv.html)
* [IchogoJam用サンプル](http://docs.fabo.io/fabo/ichigojam/brick_analog/114_brick_analog_ir_uv.html)

## Parts Specification
| Document |
|:--|
| [GaAsPフォトダイオードG6262](https://www.hamamatsu.com/resources/pdf/ssd/g5645_etc_kgpd1004j.pdf) |

## Parts
- GaAsPフォトダイオードG6262

## GitHub
- https://github.com/FaBoPlatform/FaBo/tree/master/0114_uv
