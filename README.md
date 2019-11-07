# [STM32H750](https://github.com/sochub/STM32H750)
[![sites](http://182.61.61.133//resources/OS-Q.png)](http://www.qitas.cn) com)

#### [Vendor](https://github.com/sochub/Vendor) ：[ST](https://github.com/sochub/ST)
#### [Cortex](https://github.com/sochub/Cortex) ：[Cortex M7](https://github.com/sochub/CM7)（2.14 DMIPS/MHz）
#### [Level](https://github.com/sochub/Level)：2020 CoreMark | 856 DMIPS @ 400 MHz

## [描述](https://github.com/sochub/STM32H750/wiki) 

[STM32H750](https://github.com/sochub/STM32H750)是[STM32H7](https://www.st.com/zh/microcontrollers-microprocessors/stm32h7-series.html)系列中的高性价比产品，参考售价2.69美金，通过降低内部FLASH的配置，获得超高的性价比。

400 MHz CPU主频下从Flash 执行程序，利用其 L1 缓存实现了零等待执行。DSP 指令集和双精度 FPU 扩大了其应用范围。得益于 L1 缓存（16 KB + 16 KB 的指令缓存和数据缓存），即使使用外部存储器也不会带来性能损失。

2 个专用音频 PLL、3 个全双工 I²S 接口、1 个支持时分多路复用 (TDM) 模式的新串行音频接口 (SAI) 和 1 个 DFSDM（用于 Sigma-Delta 调制器或 MEMS 麦克风的数字滤波器）。

多达35个通信接口（除4个UART外，4个速度12.5Mb/s 的USART接口、1 个低功耗 UART、6 个 100 Mb/s 的 SPI 接口，4 个带有新型可选数字滤波功能的 1 MHz I²C 接口、2 个 FD-CAN、2 个 SDIO、带片上 PHY 的 USB 2.0 全速设备/主机/OTG 控制器和 1 个 USB2.0 高速/全速设备/主机/OTG 控制器、片上全速 PHY 和 ULPI、以太网 MAC、SPDIF-IN、HDMI-CEC、摄像头接口、单线协议接口和 MDIO 从接口。

3个达到16位最大分辨率 (3.6 Msample/s) 的快速 ADC 以及 22 个 16 位和 32 位定时器（16 位高分辨率定时器的运行频率高达 400 MHz）。利用带有 32 位并行接口的灵活存储控制器可轻松扩展存储器容量，支持 Compact Flash、SRAM、PSRAM、NOR、NAND 和 SDRAM 存储器，或利用双模 Quad-SPI 从外部串行 Flash 执行代码。

分散架构的1 MB SRAM：在最低功耗模式下保存数据的192 KB TCM RAM（包括 64 KB 的 ITCM RAM 和 128 KB 的 DTCM RAM，用于时间关键型程序和数据）、512 KB、288 KB 和 64 KB 的用户 SRAM 以及 4 KB 的备份域 SRAM，此系列采用BGA 和 LQFP 规范的 LQFP100、UFBGA176 和 TFBGA240引脚封装。

### 关键特性（核心买点）

* 400 MHz CPU,1 MB SRAM
* 35个通信接口
* 16位ADC (3.6 Msample/s), 2个12位DAC
* 片上集成 128 KB Flash
* 片上集成 1 MB SRAM

### [收录资源](https://github.com/sochub)

* [文档](docs/)
* [资源](src/)

### [关联资源](https://github.com/sochub)

* [编译工具](https://github.com/sochub/arm-none-eabi)

### [选择建议](https://github.com/sochub)

[STM32H750](https://github.com/sochub/STM32H750) 是ST针对高性能控制市场推出的MCU，可谓是集大成者，拥有性能和性价比，特别是全面的外设配置，十分具有探索性，但市场持续缺货。

相对纯外部flash启动的设备，本芯片具有128k内部存储空间，可以针对一些特定的开发应用场景。

可替代性：

* 所针对的NXP相应产品 [RT1052](https://github.com/sochub/RT1052),[RT1062](https://github.com/sochub/RT1062)
* 同系列集成FLASH版本 [STM32H743](https://github.com/sochub/STM32H743)  
* 可运行Linux多核处理器 [STM32MP1](https://github.com/sochub/STM32MP1)  

##  [SoC资源平台](http://www.qitas.cn)  
