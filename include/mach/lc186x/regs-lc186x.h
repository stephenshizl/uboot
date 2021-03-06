#ifndef __ASM_ARCH_REGS_LC186X_H
#define __ASM_ARCH_REGS_LC186X_H

/*
 * Base addresses for standard memory-mapped peripherals for LC1860
 */
/* DDR RAM. */
#define DDR_MEMORY_BASE 	(0x00000000)

/* AP_Peri_SW0.*/
#define CCI_AXI_GPV_BASE	(0xA0000000)
#define GPU_BASE		(0xA0100000)
#define CTL_BASE		(0xA0110000)
#define A7_GIC_BASE		(0xA0118000)
#define AP_PERI_SW0_GPV		(0xA0200000)

/* AP_Peri_SW1. */
#define AP_2DACC_BASE		(0xA0300000)
#define ON2_CODER_BASE		(0xA0340000)
#define ON2_ENCODER1_BASE	(0xA0342000)
#define SMMU0_BASE		(0xA0350000)

/* AP_Peri_SW2. */
#define USB_OTG_BASE		(0xA0400000)
#define USB_HSIC_BASE		(0xA0440000)
#define USB_CTL_BASE		(0xA0480000)

/* AP_Peri_SW3. */
#define ISP_BASE		(0xA0500000)
#define SMMU1_BASE		(0xA0580000)
#define LCDC0_BASE		(0xA0590000)
#define LCDC1_BASE		(0xA0591000)
#define DSI_BASE		(0xA05A0000)
#define MIPI_BASE		(0xA05B0000)
#define HPI_BASE		(0xA00B0000)

/* AP_Peri_SW4. */
#define AP_DMAG_BASE		(0xA0600000)
#define AP_DMAS_BASE		(0xA0608000)
#define AP_DMAC_BASE		(0xA060C000)
#define CIPHER_AES_BASE		(0xA0610000)
#define CIPHER_SHA_BASE		(0xA4000800)
#define NFC_BASE		(0xA0620000)
#define SDMMC1_BASE		(0xA0630000)
#define SW4_GPV_BASE		(0xA0700000)
#define ROM_BASE		(0xFFFF0000)

/* AP_Peri_SW5. */
#define AP_SEC_RAM_BASE 	(0xA0800000)
#define AP_SECURITY_BASE 	(0xA0820000)
#define AP_HPI_REG_BASE 	(0xA0830000)
#define AP_HPI_MEM_BASE 	(0xA08C0000)
#define SDMMC0_BASE		(0xA0860000)
#define SDMMC2_BASE		(0xA0861000)
#define SSI0_BASE		(0xA0880000)
#define SSI1_BASE		(0xA0881000)
#define UART0_BASE		(0xA0882000)
#define UART1_BASE		(0xA0883000)
#define UART2_BASE		(0xA0884000)
#define I2S_BASE		(0xA0885000)
#define WDT0_BASE		(0xA0890000)
#define WDT1_BASE		(0xA0891000)
#define WDT2_BASE		(0xA0892000)
#define WDT3_BASE		(0xA0893000)
#define TIMER_BASE		(0xA0894000)
#define I2C0_BASE		(0xA0895000)
#define I2C1_BASE		(0xA0896000)
#define I2C3_BASE		(0xA0897000)
#define PWM_BASE		(0xA0898000)
#define AP_PWR_BASE		(0xA0899000)
#define WDT4_BASE		(0xA089A000)
#define I2C2_BASE		(0xA08A0000)
#define KBS_BASE		(0xA08A1000)
#define SSI2_BASE		(0xA08A2000)
#define BP147_BASE		(0xA08A3000)
#define TPZCTL_BASE		(0xA08A7000)
#define SW5_GPV_BASE		(0xA0900000)

/* AP_SW0. */
#define AP_SW0_GPV_BASE		(0xA0A00000)

/* CP_GPV. */
#define CP_GPV_BASE		(0x83000000)

/* TOP. */
#define TOP_RAM1_BASE		(0xE0040000)
#define TL420_RAM_BASE		(0xE0400000)
#define TOP_MAILBOX_BASE	(0xE1000000)
#define DDR0_REG_BASE		(0xE1001000)
#define DDR1_REG_BASE		(0xE1002000)
#define TOP_DMAS_BASE		(0xE1003000)
#define TOP_DMAG_BASE		(0xE1004000)
#define COM_I2C_BASE		(0xE1006000)
#define PCM_BASE		(0xE1007000)
#define MUX_PIN_BASE		(0xE1009000)
#define DDR_PWR_BASE		(0xE100A000)
#define COM_UART_BASE		(0xE100B000)
#define GPIO_BASE		(0xE100C000)
#define COM_I2S_BASE		(0xE100E000)
#define TL420_ICTL_BASE		(0xE1010000)
#define DEBUG_APB_BASE		(0xE1080000)
#define TOP_CTRL_GPV_BASE	(0xE1100000)
#define CP_BOOT_RAM		(0xEFFF0000)

#define TOP_CTRL_GPV_SEC_CTL_TOP_COM_APB		(TOP_CTRL_GPV_BASE + 0x08)
#define AP_SW0_GPV_AD_QOS_CNTL_AP_SW1			(AP_SW0_GPV_BASE + 0x4310C)
#define AP_SW0_GPV_MAX_OT_AP_SW1			(AP_SW0_GPV_BASE + 0x43110)
#define AP_SW0_GPV_AD_QOS_CNTL_AP_SW2_DDR		(AP_SW0_GPV_BASE + 0x4410C)
#define AP_SW0_GPV_MAX_OT_AP_SW2_DDR			(AP_SW0_GPV_BASE + 0x44110)
#define AP_SW0_GPV_AD_QOS_CNTL_AP_SW3			(AP_SW0_GPV_BASE + 0x4210C)
#define AP_SW0_GPV_MAX_OT_AP_SW3			(AP_SW0_GPV_BASE + 0x42110)
#define AP_SW0_GPV_AD_QOS_CNTL_CCI_DDR			(AP_SW0_GPV_BASE + 0x4510C)
#define AP_SW0_GPV_MAX_OT_CCI_DDR			(AP_SW0_GPV_BASE + 0x45110)
#define CP_GPV_AD_QOS_CNTL_CP_SW1			(CP_GPV_BASE + 0x4510C)
#define CP_GPV_MAX_OT_CP_SW1				(CP_GPV_BASE + 0x45110)

/* CPU. */
#define AP_GIC_BASE		(A7_GIC_BASE)
#define AP_GICD_BASE		(AP_GIC_BASE + 0x1000)
#define AP_GICC_BASE		(AP_GIC_BASE+ 0x2000)

#endif /* __ASM_ARCH_REGS_LC186X_H */
