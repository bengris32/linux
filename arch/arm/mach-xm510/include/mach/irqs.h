#ifndef __HI_IRQS_H__
#define __HI_IRQS_H__

#define XM510_IRQ_START	(0)

#define TIMER01_IRQ		(XM510_IRQ_START + 4)
#define TIMER23_IRQ		(XM510_IRQ_START + 5)
#define UART0_IRQ		(XM510_IRQ_START + 0)
#define UART1_IRQ		(XM510_IRQ_START + 1)
#define UART2_IRQ		(XM510_IRQ_START + 2)
#define DMAC_IRQ		(XM510_IRQ_START + 10)
#define GMAC_IRQ		(XM510_IRQ_START + 3)
#define SDIO1_IRQ		(XM510_IRQ_START + 24)
#define SDIO2_IRQ		(XM510_IRQ_START + 25)

#define NR_IRQS			(XM510_IRQ_START + 32)

#endif
