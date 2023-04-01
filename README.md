# [STM32G474](https://doc.soc.xin/STM32G474)

[![Build Status](https://github.com/SoCXin/STM32G474/workflows/build/badge.svg)](https://github.com/SoCXin/STM32G474/actions/workflows/build.yml)

* [ST](https://www.st.com/zh/): [Cortex-M4](https://github.com/SoCXin/Cortex)
* [L3R4](https://github.com/SoCXin/Level): 170 MHz (213DMIPS,550CoreMark)

## [简介](https://github.com/SoCXin/STM32G474/wiki)

[STM32G474](https://github.com/SoCXin/STM32G474) 高分辨率系列具有高分辨率定时器、复杂波形生成器和事件处理器（HRTIM），适用于数字开关电源、照明、焊接、太阳能和无线充电等数字电源转换应用,与STM32F3系列高度兼容。

[![sites](docs/STM32G474.png)](https://www.st.com/content/st_com/zh/products/microcontrollers-microprocessors/stm32-32-bit-arm-cortex-mcus/stm32-mainstream-mcus/stm32g4-series/stm32g4x4.html)

### 关键特性

* 5个超快速12位ADC（4 Msamples/s）
* 7个12位DAC（15 Msamples/s）
* 7个超快速比较器（17ns）
* 6个具有可编程增益的运算放大器
* 最多3个CAN-FD
* USB Type-C接口以及物理层（PHY）
* USB 2.0 FS
* AES-256硬件

### [资源收录](https://github.com/SoCXin)

* [参考资源](src/)
* [相关文档](docs/)
* [典型应用](project/)

### [选型建议](https://github.com/SoCXin)

[STM32G4](https://www.st.com/zh/microcontrollers-microprocessors/stm32g4-series.html)系列用于[STM32F3](https://www.st.com/zh/microcontrollers-microprocessors/stm32f3-series.html)系列的升级替换，其中的高配版本[STM32G474](https://github.com/SoCXin/STM32G474)相较拥有更多DAC和定时器，该型特点是拥有HRTIM

[STM32G431 ￥9.05 (UFQFPN-48)](https://item.szlcsc.com/549634.html) 相对 [STM32G474](https://item.szlcsc.com/549641.html) 在外设数量上更少，性价比更高。


#### 封装规格

* STM32G474C:LQFP48 (7x7x1.4)
* STM32G474R:LQFP64 (10x10x1.4)
* STM32G474M:LQFP80 (12x12x1.4)
* STM32G474V:LQFP100 (14x14x1.4)
* STM32G474Q:LQFP128 (14x14x1.4)

#### 开源方案

* [STM32CubeG4](https://github.com/STMicroelectronics/STM32CubeG4)
* [Arduino_Core_STM32](https://github.com/stm32duino/Arduino_Core_STM32)
* [基于STM32G474的电源主控板设计](https://oshwhub.com/YangYw-311/ji-yu-STM32G474de-dian-yuan-zhu-)
