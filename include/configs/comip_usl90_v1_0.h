/*
 * (C) Copyright 2003-2004
 *
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_ENV_OVERWRITE
/*
 * High Level Configuration Options
 * (easy to change)
 */
#define CONFIG_ARMCORTEXA7              /* This is an ARM V7 CPU core */
#define CONFIG_ARMCORTEXM0	1       /* This is an ARM M0 CPU core */
#define CONFIG_CPU_LC1860	1
#define CONFIG_BOARD_EARLY_INIT_F 1

#define CONFIG_COMIP			1
#define CONFIG_COMIP_USL90_V1_0		1
#define CONFIG_8GBIT_DDR 		1

#if defined(CONFIG_COMIP_LC1860_MENTOR)
#define CONFIG_MENTOR_DEBUG
#endif

#define CONFIG_DDR_BUS_CLK		663000000    /* Configure DDR bus clock. */
#define CONFIG_A7_CLK			1599000000   /* Configure A7 clock. */

#define CONFIG_DDR_BYPASS_ENABLE		1

#define CONFIG_WATCHDOG_ENABLE		0
#define CONFIG_WATCHDOG_DEBUG		0

#define CONFIG_HA_START_ADDR    (0xE0040000)
#define CONFIG_SA_START_ADDR    (0xE0040000)

#define CONFIG_TOP_RAM1_ADDR    (0xE0040000)
#define CONFIG_TOP_RAM1_SIZE    (256 * 1024)
/* 
 *Base.
 */
#define CONFIG_COMIP_I2C		1
#define CONFIG_COMIP_TIMER		1
#define CONFIG_COMIP_MFP2		1
#define CONFIG_COMIP_GPIO		1

/*
 * NAND.
 */
//#define CONFIG_COMIP_NAND		1
#ifdef CONFIG_COMIP_NAND
#define CONFIG_COMIP_NAND_DMA		1
//#define CONFIG_COMIP_NAND_NODMA		1
#endif

/*
 * eMMC/SD.
 */
#define CONFIG_COMIP_MMC		1
#ifdef CONFIG_COMIP_MMC
#define CONFIG_GENERIC_MMC
#define CONFIG_COMIP_MMC_DMA		1
//#define CONFIG_COMIP_MMC_NODMA		1
#define CONFIG_COMIP_MMC_PULLUP		1
#endif

/*
 * Keypad.
 */
#define CONFIG_COMIP_KEYPAD		1
#define CONFIG_KEYPAD_GPIO_KEY
#define VOL_UP_KEYCODE		KEYPAD_GPIO_KEYCODE(72, 0)
#define VOL_DOWN_KEYCODE	KEYPAD_GPIO_KEYCODE(73, 0)

#define KEY_CODE_RECOVERY	(KEYPAD_VOL_UP | KEYPAD_VOL_DOWN)
#define KEY_CODE_AMT3		(KEYPAD_VOL_UP)

/*
 * PMIC Setting.
 */
#define CONFIG_COMIP_PMIC			1
#define CONFIG_PMIC_LC1160			1
#define CONFIG_LOW_VOLTAGE_CHARGING		1
#define CONFIG_CHARGER_POWER_OFF_LEVEL		(3300) /* mv */
#define CONFIG_NO_CHARGER_POWER_OFF_LEVEL	(3500) /* mv */

//#define CONFIG_NCP6335				1
#ifdef CONFIG_NCP6335
#define CONFIG_USE_EXT_BUCK2			0
#endif

/*
    BUCK2 voltage select(DVFS).
    1: Only use DVFS0 pin.
    2: Only use DVFS1 pin.
    3: Use DVFS0&DVFS1 pins.
*/
#if (CONFIG_USE_EXT_BUCK2 == 0)
#define BUCK2_VOUT_SEL				(3)
#else
#define BUCK2_VOUT_SEL				(1)
#endif

/* Buck1 voltage(DVFS). */
#define BUCK1_VOUT_LEVEL_0			(7250)  /* 0.1mv */
#define BUCK1_VOUT_LEVEL_1			(11000) /* 0.1mv */

/* BUCK2 voltage(DVFS). */
#define BUCK2_VOUT_LEVEL_0			(7250)  /* 0.1mv */
#define BUCK2_VOUT_LEVEL_1			(8500) /* 0.1mv */
#define BUCK2_VOUT_LEVEL_2			(9000) /* 0.1mv */
#define BUCK2_VOUT_LEVEL_3			(11000) /* 0.1mv */

/* BUCK3 voltage(DVFS). */
#define BUCK3_VOUT_LEVEL_0			(7250)  /* 0.1mv */
#define BUCK3_VOUT_LEVEL_1			(8500) /* 0.1mv */
#define BUCK3_VOUT_LEVEL_2			(9500) /* 0.1mv */
#define BUCK3_VOUT_LEVEL_3			(10000) /* 0.1mv */

/* BUCK4 voltage(DVFS). */
#define BUCK4_VOUT_LEVEL_0			(11500) /* 0.1mv */
#define BUCK4_VOUT_LEVEL_1			(14000) /* 0.1mv */

/* BUCK5 voltage(DVFS). */
#define BUCK5_VOUT_LEVEL_0			(1150) /* mv */
#define BUCK5_VOUT_LEVEL_1			(1200) /* mv */

/* BUCK6 voltage(DVFS). */
#define BUCK6_VOUT_LEVEL_0			(1750) /* mv */
#define BUCK6_VOUT_LEVEL_1			(1800) /* mv */

/*
 * NS16550 Configuration
 */
#define CONFIG_SYS_NS16550		1
#define CONFIG_SYS_NS16550_SERIAL	1
#define CONFIG_SYS_NS16550_REG_SIZE	(-4)
#define CONFIG_SYS_NS16550_CLK		(921600)	   /* can be 12M/32Khz or 48Mhz */
#define CONFIG_SYS_NS16550_COM1	   	(0xE100B000)

/*
 * Select serial console configuration
 */
#define CONFIG_CONS_INDEX		1
#define CONFIG_BAUDRATE			115200
#define CONFIG_SYS_BAUDRATE_TABLE	{ 9600,  115200 }

#define CONFIG_CMDLINE_TAG	   	1
#define CONFIG_SETUP_MEMORY_TAGS   	1

#ifndef CONFIG_SYS_TEXT_BASE
#define CONFIG_SYS_TEXT_BASE    0xE0040000
#endif

#define CONFIG_SYS_MALLOC_LEN		(CONFIG_ENV_SIZE + 128 * 1024)

#define CONFIG_BOOTARGS_ENABLE		1
#define CONFIG_BOOTDELAY		10
#define CONFIG_BOOTARGS			"console=ttyS3,115200 vmalloc=312M " CONFIG_BOOTARGS_RAMDISK CONFIG_BOOTARGS_MEM "android "
#define CONFIG_BOOTARGS_CHARGE_ONLY		"loglevel=0 console=ttyS3,115200 vmalloc=312M " CONFIG_BOOTARGS_RAMDISK CONFIG_BOOTARGS_MEM "android "

/*
 * Miscellaneous configurable options
 */

#define CONFIG_SYS_PROMPT		"leadcore comip # "	/* Monitor Command Prompt   */
#define CONFIG_SYS_CBSIZE		256	/* Console I/O Buffer Size  */

/* Print Buffer Size */
#define CONFIG_SYS_PBSIZE		(CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)
#define CONFIG_SYS_MAXARGS		16	/* max number of command args   */
#define CONFIG_SYS_BARGSIZE		CONFIG_SYS_CBSIZE	/* Boot Argument Buffer Size    */

#define CONFIG_SYS_LOAD_ADDR		(CONFIG_SYS_SDRAM_BASE)	/* default load address */
#define CONFIG_SYS_SDRAM_BASE		0x00000000
#define CONFIG_SYS_INIT_SP_ADDR		(CONFIG_TOP_RAM1_ADDR + CONFIG_TOP_RAM1_SIZE - GENERATED_GBL_DATA_SIZE)

/*-----------------------------------------------------------------------
 * Stack sizes
 *
 * The stack sizes are set up in start.S using the settings below
 */

#define CONFIG_STACKSIZE		(16 * 1024)	/* regular stack */
#define CONFIG_STACKSIZE_IRQ		(5 * 1024)
#define CONFIG_STACKSIZE_FIQ		(5 * 1024)

/*-----------------------------------------------------------------------
 * Physical Memory Map
 */
#define CONFIG_NR_DRAM_BANKS	   	1	/* we have 1 bank of DRAM */
#define PHYS_SDRAM_1		   	0x00000000 /* SDRAM Bank #1 */
#define PHYS_SDRAM_2			0x40000000 /* SDRAM Bank #2 */

#if defined(CONFIG_16GBIT_DDR)
#define PHYS_SDRAM_1_SIZE	   	0x40000000 /* 2GB */
//#define PHYS_SDRAM_2_SIZE	   	0x40000000
#define CONFIG_BOOTARGS_MEM		""
#elif defined(CONFIG_8GBIT_DDR)
#define PHYS_SDRAM_1_SIZE	   	0x20000000 /* 1GB */
//#define PHYS_SDRAM_2_SIZE	   	0x20000000
#define CONFIG_BOOTARGS_MEM		""
#else
#define PHYS_SDRAM_1_SIZE	   	0x10000000 /* 512MB */
#define PHYS_SDRAM_2_SIZE	   	0x10000000
#define CONFIG_BOOTARGS_MEM		""
#endif

#ifdef PHYS_SDRAM_2_SIZE
#define PHYS_SDRAM_END			(PHYS_SDRAM_2 + PHYS_SDRAM_2_SIZE)
#else
#define PHYS_SDRAM_END			(PHYS_SDRAM_1 + PHYS_SDRAM_1_SIZE)
#endif

#define CONFIG_BOOTARGS_RAMDISK		"initrd=0x07400000,1M "
#define CONFIG_RAMDISK_LOADADDR		(0x07400000)

#define CONFIG_KERNEL_MEMORY_BASE	(CONFIG_MODEM_MEMORY_SIZE)
#define CONFIG_KERNEL_LOADADDR		(CONFIG_KERNEL_MEMORY_BASE + 0x8000)
#define CONFIG_BOOT_PARAMS_LOADADDR	(CONFIG_KERNEL_MEMORY_BASE + 0x100)

#define CONFIG_MODEM_MEMORY_SIZE	(100 * 1024 * 1024)
#define CONFIG_MODEM_MEMORY_BASE	(0)

//#define CONFIG_ON2_MEMORY_FIX		1
#ifdef CONFIG_ON2_MEMORY_FIX
#define CONFIG_ON2_MEMORY_SIZE		(50 * 1024 * 1024)
#define CONFIG_ON2_MEMORY_BASE		(PHYS_SDRAM_END - CONFIG_ON2_MEMORY_SIZE)
#else
#define CONFIG_ON2_MEMORY_SIZE		(0)
#define CONFIG_ON2_MEMORY_BASE		(PHYS_SDRAM_END)
#endif

#define CONFIG_FB_MEMORY_FIX		1
#define CONFIG_FB_MEMORY_SIZE		(0x00800000)
#define CONFIG_FB_MEMORY_NUM		(3)
#ifdef CONFIG_FB_MEMORY_FIX
#define CONFIG_FB_MEMORY_BASE		(CONFIG_ON2_MEMORY_BASE - CONFIG_FB_MEMORY_NUM * CONFIG_FB_MEMORY_SIZE)
#else
#define CONFIG_FB_MEMORY_BASE		(CONFIG_ON2_MEMORY_BASE) /* LOGO. */
#endif

/*-----------------------------------------------------------------------
 * FLASH and environment organization
 */
#define CONFIG_SYS_NO_FLASH

#define CONFIG_ENV_SIZE			(20 * 1024)	/* Total Size of Environment Sector */

#define CONFIG_ENV_IS_NOWHERE

/*-----------------------------------------------------------------------
 * FLASH partition
 */
#define CONFIG_USE_KERNEL_RECOVERY		1
#define CONFIG_USE_RAMDISK_AMT3			1

#define CONFIG_PARTITION_UBOOT			"uboot"
#define CONFIG_PARTITION_LCBOOT			"lcboot"
#define CONFIG_PARTITION_LOGO			"logo"
#define CONFIG_PARTITION_FOTA			"fota"
#define CONFIG_PARTITION_PANIC			"panic"
#define CONFIG_PARTITION_AMT			"amt"
#define CONFIG_PARTITION_MODEM_ARM		"modemarm"
#define CONFIG_PARTITION_MODEM_DSP		"modemdsp"
#define CONFIG_PARTITION_KERNEL			"kernel"
#define CONFIG_PARTITION_RAMDISK		"ramdisk"
#define CONFIG_PARTITION_RAMDISK_AMT1		"ramdisk_amt1"
#define CONFIG_PARTITION_RAMDISK_AMT3		"ramdisk_amt3"
#define CONFIG_PARTITION_RAMDISK_RECOVERY	"ramdisk_recovery"
#define CONFIG_PARTITION_KERNEL_RECOVERY	"kernel_recovery"
#define CONFIG_PARTITION_MISC			"misc"
#define CONFIG_PARTITION_CACHE			"cache"
#define CONFIG_PARTITION_SYSTEM			"system"
#define CONFIG_PARTITION_USERDATA		"userdata"
#define CONFIG_PARTITION_UDISK                  "udisk"

#define CONFIG_COMIP_PARTITIONS		\
	{0x200, 0x00000000, 0x00000100, CONFIG_PARTITION_UBOOT}, \
	{0x200, 0x00000400, 0x00000400, CONFIG_PARTITION_LCBOOT}, \
	{0x200, 0x00000800, 0x00004000, CONFIG_PARTITION_LOGO}, \
	{0x200, 0x00004800, 0x00000800, CONFIG_PARTITION_FOTA}, \
	{0x200, 0x00005000, 0x00000800, CONFIG_PARTITION_PANIC}, \
	{0x200, 0x00005800, 0x00001000, CONFIG_PARTITION_AMT}, \
	{0x200, 0x00006800, 0x0000B000, CONFIG_PARTITION_MODEM_ARM}, \
	{0x200, 0x00011800, 0x0000B000, CONFIG_PARTITION_MODEM_DSP}, \
	{0x200, 0x0001C800, 0x00003000, CONFIG_PARTITION_KERNEL}, \
	{0x200, 0x00020800, 0x00000800, CONFIG_PARTITION_RAMDISK}, \
	{0x200, 0x00021000, 0x00000800, CONFIG_PARTITION_RAMDISK_AMT1}, \
	{0x200, 0x00021800, 0x00000800, CONFIG_PARTITION_RAMDISK_AMT3}, \
	{0x200, 0x00022000, 0x00000800, CONFIG_PARTITION_RAMDISK_RECOVERY}, \
	{0x200, 0x00022800, 0x00003000, CONFIG_PARTITION_KERNEL_RECOVERY}, \
	{0x200, 0x00027000, 0x00001000, CONFIG_PARTITION_MISC}, \
	{0x200, 0x00028000, 0x00040000, CONFIG_PARTITION_CACHE}, \
	{0x200, 0x00068000, 0x000c0000, CONFIG_PARTITION_SYSTEM}, \
	{0x200, 0x00128000, 0x00200000, CONFIG_PARTITION_UDISK}, \
	{0x200, 0x00328000, 0x003d8800, CONFIG_PARTITION_USERDATA},

/*-----------------------------------------------------------------------
 * External functions
 */
//#define CONFIG_DDR_MEMTEST		1

//#define CONFIG_COMIP_FASTBOOT		1
#ifdef CONFIG_COMIP_FASTBOOT

#define CONFIG_USB_GADGET
#define CONFIG_USB_GADGET_DUALSPEED
#define CONFIG_USB_GADGET_FASTBOOT

#define CONFIG_KEY_CODE_FASTBOOT	(KEYPAD_VOL_DOWN)
#define CONFIG_USE_IRQ			1
#define CONFIG_FALSH_WRITE		1

#define USB_DDR_MEMORY_SIZE		(1024 * 1024)
#define CONFIG_FASTBOOT_BUFFER_SIZE	(400 * 1024 * 1024)

#define CONFIG_USB_HIGH			1
#define CONFIG_USB_DEBUG		1
#define CONFIG_SERIAL_DEBUG		1
#endif

//#define CONFIG_EFI_PARTITION		1
#ifdef CONFIG_EFI_PARTITION
#define CONFIG_PARTITIONS		1
#define HAVE_BLOCK_DEVICE		1
#define CONFIG_PARTITION_UUIDS		1
#endif

#endif /* ! __CONFIG_H */
