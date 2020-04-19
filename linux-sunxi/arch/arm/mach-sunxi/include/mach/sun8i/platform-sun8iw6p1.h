/*
 * arch/arm/mach-sunxi/include/mach/sun8i/platform-sun8iw5p1.h
 *
 * Copyright(c) 2013-2015 Allwinnertech Co., Ltd.
 *      http://www.allwinnertech.com
 *
 * Author: liugang <liugang@allwinnertech.com>
 *
 * sun8i platform header file
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __PLATFORM_SUN8I_W6P1_H
#define __PLATFORM_SUN8I_W6P1_H

/*
 * memory definitions
 */
/* #define SUNXI_IO_PBASE                   0x01000000 */
/* #define SUNXI_IO_SIZE                    0x01000000 */
#define SUNXI_BROM0_N_PBASE              0xffff0000
#define SUNXI_BROM0_N_SIZE               0x00008000
#define SUNXI_BROM1_S_PBASE              0xffff0000
#define SUNXI_BROM1_S_SIZE               0x00010000
#define SUNXI_SRAM_A1_PBASE              0x00000000
#define SUNXI_SRAM_A1_SIZE               0x00008000
#define SUNXI_SRAM_A2_PBASE              0x00040000
#define SUNXI_SRAM_A2_SIZE               0x00014000
#define SUNXI_SRAM_B_PBASE               0x00020000
#define SUNXI_SRAM_B_SIZE                0x00018000
#define SUNXI_SDRAM_PBASE                0x40000000

/*
 *  device physical addresses
 */
#define SUNXI_DE_PBASE                   0x01000000
#define SUNXI_DE_SIZE                    0x00400000
#define SUNXI_CORE_DEBUG_PBASE           0x01400000
#define SUNXI_CORE_DEBUG_SIZE            0x00020000
#define SUNXI_CLUSTER0_MBIST_PBASE       0x01502000
#define SUNXI_CLUSTER0_MBIST_SIZE        0x00001000
#define SUNXI_TSGEN_RO_PBASE             0x01506000
#define SUNXI_TSGEN_RO_SIZE              0x00001000
#define SUNXI_CLUSTER1_MBIST_PBASE       0x01602000
#define SUNXI_CLUSTER1_MBIST_SIZE        0x00001000
#define SUNXI_TSGEN_CTRL_PBASE           0x01607000
#define SUNXI_TSGEN_CTRL_SIZE            0x00001000
#define SUNXI_CPUXCFG_PBASE              0x01700000
#define SUNXI_CPUXCFG_SIZE               0x00000400
#define SUNXI_TIMESTAMP_STA_PBASE        0x01710000
#define SUNXI_TIMESTAMP_STA_SIZE         0x00001000
#define SUNXI_TIMESTAMP_CTRL_PBASE       0x01720000
#define SUNXI_TIMESTAMP_CTRL_SIZE        0x00001000
#define SUNXI_CCI400_PBASE               0x01790000

#define SUNXI_SRAMCTRL_PBASE             0x01c00000
#define SUNXI_DMA_PBASE                  0x01c02000
#define SUNXI_NFC0_PBASE                 0x01c03000
#define SUNXI_KEYMEM_PBASE               0x01c0b000
#define SUNXI_LCD0_PBASE                 0x01c0c000
#define SUNXI_LCD1_PBASE                 0x01c0d000
#define SUNXI_VE_PBASE                   0x01c0e000
#define SUNXI_SDMMC0_PBASE               0x01c0f000
#define SUNXI_SDMMC1_PBASE               0x01c10000
#define SUNXI_SDMMC2_PBASE               0x01c11000
#define SUNXI_SID_PBASE                  0x01c14000
#define SUNXI_SS_PBASE                   0x01c15000
#define SUNXI_MSGBOX_PBASE               0x01c17000
#define SUNXI_SPINLOCK_PBASE             0x01c18000
#define SUNXI_USB_OTG_PBASE              0x01c19000
#define SUNXI_USB_HCI0_PBASE             0x01c1a000
#define SUNXI_USB_HCI1_PBASE             0x01c1b000
#define SUNXI_SMC_PBASE                  0x01c1e000
#define SUNXI_CCM_PBASE                  0x01c20000
#define SUNXI_PIO_PBASE                  0x01c20800
#define SUNXI_TIMER_PBASE                0x01c20c00
#define SUNXI_OWA_PBASE                  0x01c21000
#define SUNXI_PWM_PBASE                  0x01c21400
#define SUNXI_DAUDIO0_PBASE              0x01c22000
#define SUNXI_DAUDIO1_PBASE              0x01c22400
#define SUNXI_DAUDIO2_PBASE              0x01c22800
#define SUNXI_TDM_PBASE                  0x01c23000
#define SUNXI_SMTA_PBASE                 0x01c23400
#define SUNXI_MIPI_DSI0_PBASE            0x01c26000
#define SUNXI_UART0_PBASE                0x01c28000
#define SUNXI_UART1_PBASE                0x01c28400
#define SUNXI_UART2_PBASE                0x01c28800
#define SUNXI_UART3_PBASE                0x01c28c00
#define SUNXI_UART4_PBASE                0x01c29000
#define SUNXI_TWI0_PBASE                 0x01c2ac00
#define SUNXI_TWI1_PBASE                 0x01c2b000
#define SUNXI_TWI2_PBASE                 0x01c2b400
#define SUNXI_GMAC_PBASE                 0x01c30000
#define SUNXI_GPU_PBASE                  0x01c40000
#define SUNXI_HSTMR_PBASE                0x01c60000
#define SUNXI_DRAMCOM_PBASE              0x01c62000
#define SUNXI_DRAMCTL0_PBASE             0x01c63000
#define SUNXI_DRAMPHY0_PBASE             0x01c65000
#define SUNXI_SPI0_PBASE                 0x01c68000
#define SUNXI_SPI1_PBASE                 0x01c69000
#define SUNXI_GIC_PBASE                  0x01c80000
#define SUNXI_GIC_DIST_PBASE             0x01c81000
#define SUNXI_GIC_CPU_PBASE              0x01c82000
#define SUNXI_CSI_PBASE                  0x01cb0000
#define SUNXI_VEMEM_PBASE                0x01d00000
#define SUNXI_HDMI_PBASE                 0x01ee0000
#define SUNXI_R_TIMER_PBASE              0x01f00800
#define SUNXI_R_INTC_PBASE               0x01f00c00
#define SUNXI_R_WDOG_PBASE               0x01f01000
#define SUNXI_R_PRCM_PBASE               0x01f01400
#define SUNXI_R_TWD_PBASE                0x01f01800
#define SUNXI_R_CPUCFG_PBASE             0x01f01c00
#define SUNXI_CIR_TX_PBASE               0x01f02000
#define SUNXI_R_TWI_PBASE                0x01f02400
#define SUNXI_R_UART_PBASE               0x01f02800
#define SUNXI_R_PIO_PBASE                0x01f02c00
#define SUNXI_R_RSB_PBASE                0x01f03400
#define SUNXI_R_PWM_PBASE                0x01f03800
#define SUNXI_LRADC_PBASE                0x01f03c00
#define SUNXI_R_TH_PBASE                 0x01f04000

/*
 * define virt addresses
 */
#define SUNXI_DE_VBASE                   IO_ADDRESS(SUNXI_DE_PBASE)
#define SUNXI_BROM1_S_VBASE              (SUNXI_IO_VBASE + SUNXI_IO_SIZE)
#define SUNXI_IO_VBASE                   IO_ADDRESS(SUNXI_IO_PBASE)
#define SUNXI_SRAM_A1_VBASE              IO_ADDRESS(SUNXI_SRAM_A1_PBASE)
#define SUNXI_SRAM_A2_VBASE              IO_ADDRESS(SUNXI_SRAM_A2_PBASE)
#define SUNXI_SRAM_B_VBASE               IO_ADDRESS(SUNXI_SRAM_B_PBASE)
#define SUNXI_SRAMCTRL_VBASE             IO_ADDRESS(SUNXI_SRAMCTRL_PBASE)
#define SUNXI_DMA_VBASE                  IO_ADDRESS(SUNXI_DMA_PBASE)
#define SUNXI_NANDFLASHC0_VBASE          IO_ADDRESS(SUNXI_NANDFLASHC0_PBASE)
#define SUNXI_NFC0_VBASE                 IO_ADDRESS(SUNXI_NFC0_PBASE)
#define SUNXI_LCD0_VBASE                 IO_ADDRESS(SUNXI_LCD0_PBASE)
#define SUNXI_LCD1_VBASE                 IO_ADDRESS(SUNXI_LCD1_PBASE)
#define SUNXI_VE_VBASE                   IO_ADDRESS(SUNXI_VE_PBASE)
#define SUNXI_SDMMC0_VBASE               IO_ADDRESS(SUNXI_SDMMC0_PBASE)
#define SUNXI_SDMMC1_VBASE               IO_ADDRESS(SUNXI_SDMMC1_PBASE)
#define SUNXI_SDMMC2_VBASE               IO_ADDRESS(SUNXI_SDMMC2_PBASE)
#define SUNXI_SID_VBASE                  IO_ADDRESS(SUNXI_SID_PBASE)
#define SUNXI_SS_VBASE                   IO_ADDRESS(SUNXI_SS_PBASE)
#define SUNXI_MSGBOX_VBASE               IO_ADDRESS(SUNXI_MSGBOX_PBASE)
#define SUNXI_SPINLOCK_VBASE             IO_ADDRESS(SUNXI_SPINLOCK_PBASE)
#define SUNXI_USB_OTG_VBASE              IO_ADDRESS(SUNXI_USB_OTG_PBASE)
#define SUNXI_USB_HCI0_VBASE             IO_ADDRESS(SUNXI_USB_HCI0_PBASE)
#define SUNXI_USB_HCI1_VBASE             IO_ADDRESS(SUNXI_USB_HCI1_PBASE)
#define SUNXI_CCM_VBASE                  IO_ADDRESS(SUNXI_CCM_PBASE)
#define SUNXI_PIO_VBASE                  IO_ADDRESS(SUNXI_PIO_PBASE)
#define SUNXI_TIMER_VBASE                IO_ADDRESS(SUNXI_TIMER_PBASE)
#define SUNXI_OWA_VBASE                  IO_ADDRESS(SUNXI_OWA_PBASE)
#define SUNXI_PWM_VBASE                  IO_ADDRESS(SUNXI_PWM_PBASE)
#define SUNXI_DAUDIO0_VBASE              IO_ADDRESS(SUNXI_DAUDIO0_PBASE)
#define SUNXI_DAUDIO1_VBASE              IO_ADDRESS(SUNXI_DAUDIO1_PBASE)
#define SUNXI_LRADC_VBASE                IO_ADDRESS(SUNXI_LRADC_PBASE)
#define SUNXI_AUDIO_VBASE                IO_ADDRESS(SUNXI_AUDIO_PBASE)
#define SUNXI_THERMAL_VBASE              IO_ADDRESS(SUNXI_THERMAL_PBASE)
#define SUNXI_UART0_VBASE                IO_ADDRESS(SUNXI_UART0_PBASE)
#define SUNXI_UART1_VBASE                IO_ADDRESS(SUNXI_UART1_PBASE)
#define SUNXI_UART2_VBASE                IO_ADDRESS(SUNXI_UART2_PBASE)
#define SUNXI_UART3_VBASE                IO_ADDRESS(SUNXI_UART3_PBASE)
#define SUNXI_UART4_VBASE                IO_ADDRESS(SUNXI_UART4_PBASE)
#define SUNXI_TWI0_VBASE                 IO_ADDRESS(SUNXI_TWI0_PBASE)
#define SUNXI_TWI1_VBASE                 IO_ADDRESS(SUNXI_TWI1_PBASE)
#define SUNXI_TWI2_VBASE                 IO_ADDRESS(SUNXI_TWI2_PBASE)
#define SUNXI_GPU_VBASE                  IO_ADDRESS(SUNXI_GPU_PBASE)
#define SUNXI_HSTMR_VBASE                IO_ADDRESS(SUNXI_HSTMR_PBASE)
#define SUNXI_DRAMCOM_VBASE              IO_ADDRESS(SUNXI_DRAMCOM_PBASE)
#define SUNXI_DRAMCTL0_VBASE             IO_ADDRESS(SUNXI_DRAMCTL0_PBASE)
#define SUNXI_DRAMPHY0_VBASE             IO_ADDRESS(SUNXI_DRAMPHY0_PBASE)
#define SUNXI_SPI0_VBASE                 IO_ADDRESS(SUNXI_SPI0_PBASE)
#define SUNXI_SPI1_VBASE                 IO_ADDRESS(SUNXI_SPI1_PBASE)
#define SUNXI_SCU_VBASE                  IO_ADDRESS(SUNXI_SCU_PBASE)
#define SUNXI_GIC_DIST_VBASE             IO_ADDRESS(SUNXI_GIC_DIST_PBASE)
#define SUNXI_GIC_CPU_VBASE              IO_ADDRESS(SUNXI_GIC_CPU_PBASE)
#define SUNXI_MIPI_DSI0_VBASE            IO_ADDRESS(SUNXI_MIPI_DSI0_PBASE)
#define SUNXI_MIPI_DSI0_PHY_VBASE        IO_ADDRESS(SUNXI_MIPI_DSI0_PHY_PBASE)
#define SUNXI_CSI_VBASE                  IO_ADDRESS(SUNXI_CSI_PBASE)
#define SUNXI_HDMI_VBASE                 IO_ADDRESS(SUNXI_HDMI_PBASE)
#define SUNXI_RTC_VBASE                  IO_ADDRESS(SUNXI_RTC_PBASE)
#define SUNXI_R_TIMER_VBASE              IO_ADDRESS(SUNXI_R_TIMER_PBASE)
#define SUNXI_R_INTC_VBASE               IO_ADDRESS(SUNXI_R_INTC_PBASE)
#define SUNXI_R_WDOG_VBASE               IO_ADDRESS(SUNXI_R_WDOG_PBASE)
#define SUNXI_R_PRCM_VBASE               IO_ADDRESS(SUNXI_R_PRCM_PBASE)
#define SUNXI_R_CPUCFG_VBASE             IO_ADDRESS(SUNXI_R_CPUCFG_PBASE)
#define SUNXI_CPUXCFG_VBASE              IO_ADDRESS(SUNXI_CPUXCFG_PBASE)
#define SUNXI_R_TWI_VBASE                IO_ADDRESS(SUNXI_R_TWI_PBASE)
#define SUNXI_R_UART_VBASE               IO_ADDRESS(SUNXI_R_UART_PBASE)
#define SUNXI_R_PIO_VBASE                IO_ADDRESS(SUNXI_R_PIO_PBASE)
#define SUNXI_R_RSB_VBASE                IO_ADDRESS(SUNXI_R_RSB_PBASE)
#define SUNXI_R_PWM_VBASE                IO_ADDRESS(SUNXI_R_PWM_PBASE)
#define SUNXI_CCI400_VBASE               IO_ADDRESS(SUNXI_CCI400_PBASE)
/*
 * watchdog reg off
 */
#define R_WDOG_IRQ_EN_REG                0x0
#define R_WDOG_IRQ_STA_REG               0x4
#define R_WDOG_CTRL_REG                  0x10
#define R_WDOG_CFG_REG                   0x14
#define R_WDOG_MODE_REG                  0x18

/*
 * cpucfg
 */
#define PRIVATE_REG0                        0x01a4
#define PRIVATE_REG1                        0x01a8
#define BOOT_CPU_HOTPLUG_REG                0x01ac
#define SUNXI_CPUSCFG_C0CPUX_RESET          0x30
#define SUNXI_CPUSCFG_C1CPUX_RESET          0x34
#define SUNXI_CLUSTER_PWRON_RESET(cluster)  (0x30 + (cluster) * 0x4)
/*
 *  cpuxcfg
 */

#define SUNXI_CPUXCFG_C0CTRL_REG0         0x000
#define SUNXI_CPUXCFG_C0CTRL_REG1         0x004
#define SUNXI_CPUXCFG_C1CTRL_REG0         0x010
#define SUNXI_CPUXCFG_C1CTRL_REG1         0x014
#define SUNXI_CLUSTER_CTRL0(cluster)                (0x000 + (cluster) * 0x10)
#define SUNXI_CLUSTER_CTRL1(cluster)                (0x004 + (cluster) * 0x10)
#define SUNXI_CPUXCFG_DBGCTL0             0x020
#define C0_CPU_STATUS                             0x0030
#define C1_CPU_STATUS                             0x0034
#define DBG_REG1                                  0x0038
#define C0_RST_CTRL                               0x0080
#define C1_RST_CTRL                               0x0084
#define GIC_RST_CTRL                              0x0088
#define SUNXI_CLUSTER_CPU_STATUS(cluster)         (0x30 + (cluster)*0x4)
#define SUNXI_CPU_RST_CTRL(cluster)               (0x80 + (cluster)*0x4)
/*
 * prcm
 */
#define SUNXI_C0CPUX_PWROFF_REG           0x100
#define SUNXI_C1CPUX_PWROFF_REG           0x104
#define SUNXI_CLUSTER_PWROFF_GATING(cluster)      (0x100 + (cluster) * 0x4)
#define SUNXI_CPU_PWR_CLAMP(cluster, cpu)         (0x140 + (cluster*4 + cpu)*0x04)
/*
 * uart reg off
 */
#define SUNXI_UART_RBR                   0x00	/* receive buffer register */
#define SUNXI_UART_THR                   0x00	/* transmit holding register */
#define SUNXI_UART_DLL                   0x00	/* divisor latch low register */
#define SUNXI_UART_DLH                   0x04	/* diviso latch high register */
#define SUNXI_UART_IER                   0x04	/* interrupt enable register */
#define SUNXI_UART_IIR                   0x08	/* interrupt identity register */
#define SUNXI_UART_FCR                   0x08	/* FIFO control register */
#define SUNXI_UART_LCR                   0x0c	/* line control register */
#define SUNXI_UART_MCR                   0x10	/* modem control register */
#define SUNXI_UART_LSR                   0x14	/* line status register */
#define SUNXI_UART_MSR                   0x18	/* modem status register */
#define SUNXI_UART_SCH                   0x1c	/* scratch register */
#define SUNXI_UART_USR                   0x7c	/* status register */
#define SUNXI_UART_TFL                   0x80	/* transmit FIFO level */
#define SUNXI_UART_RFL                   0x84	/* RFL */
#define SUNXI_UART_HALT                  0xa4	/* halt tx register */

#define UART_USR                         (SUNXI_UART_USR >> 2)
#define UART_HALT                        (SUNXI_UART_HALT >> 2)
#define UART_SCH                         (SUNXI_UART_SCH >> 2)
#define UART_FORCE_CFG                   (1 << 1)
#define UART_FORCE_UPDATE                (1 << 2)

#define SUNXI_UART_LOG(fmt, args...) do {} while (0)

#define SUNXI_R_UART_LOG(fmt, args...)      \
	do {                             \
		aw_printk((u32)SUNXI_R_UART_PBASE, "[%s]"fmt"\n", __FUNCTION__, ##args); \
	} while (0)

#endif /* __PLATFORM_SUN8I_W6P1_H */
