/************************************************************************************
 * arch/z80/src/ez80/ez80f91.h
 * arch/z80/src/chip/ez80f91.h
 *
 *   Copyright (C) 2008 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <spudmonkey@racsa.co.cr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_Z80_SRC_EZ80_EZ80F91_H
#define __ARCH_Z80_SRC_EZ80_EZ80F91_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

/************************************************************************************
 * Definitions
 ************************************************************************************/

/* Product ID Registers  ************************************************************/

#define EZ80_ZDI_ID_L          0x00
#define EZ80_ZDI_ID_H          0x01
#define EZ80_ZDI_ID_REV        0x02

/* Interrupt Registers  *************************************************************/

#define EZ80_INT_P0            0x10
#define EZ80_INT_P1            0x11
#define EZ80_INT_P2            0x12
#define EZ80_INT_P3            0x13
#define EZ80_INT_P4            0x14
#define EZ80_INT_P5            0x15

/* EMACC Registers  *****************************************************************/

#define EZ80_EMAC_TEST         0x20
#define EZ80_EMAC_CFG1         0x21
#define EZ80_EMAC_CFG2         0x22
#define EZ80_EMAC_CFG3         0x23
#define EZ80_EMAC_CFG4         0x24
#define EZ80_EMAC_STAD_0       0x25
#define EZ80_EMAC_STAD_1       0x26
#define EZ80_EMAC_STAD_2       0x27
#define EZ80_EMAC_STAD_3       0x28
#define EZ80_EMAC_STAD_4       0x29
#define EZ80_EMAC_STAD_5       0x2a
#define EZ80_EMAC_TPTV_L       0x2b
#define EZ80_EMAC_TPTV_H       0x2c
#define EZ80_EMAC_IPGT         0x2d
#define EZ80_EMAC_IPGR1        0x2e
#define EZ80_EMAC_IPGR2        0x2f
#define EZ80_EMAC_MAXF_L       0x30
#define EZ80_EMAC_MAXF_H       0x31
#define EZ80_EMAC_AFR          0x32
#define EZ80_EMAC_HTBL_0       0x33
#define EZ80_EMAC_HTBL_1       0x34
#define EZ80_EMAC_HTBL_2       0x35
#define EZ80_EMAC_HTBL_3       0x36
#define EZ80_EMAC_HTBL_4       0x37
#define EZ80_EMAC_HTBL_5       0x38
#define EZ80_EMAC_HTBL_6       0x39
#define EZ80_EMAC_HTBL_7       0x3a
#define EZ80_EMAC_MIIMGT       0x3b
#define EZ80_EMAC_CTLD_L       0x3c
#define EZ80_EMAC_CTLD_H       0x3d
#define EZ80_EMAC_RGAD         0x3e
#define EZ80_EMAC_FIAD         0x3f
#define EZ80_EMAC_PTMR         0x40
#define EZ80_EMAC_RST          0x41
#define EZ80_EMAC_TLBP_L       0x42
#define EZ80_EMAC_TLBP_H       0x43
#define EZ80_EMAC_BP_L         0x44
#define EZ80_EMAC_BP_H         0x45
#define EZ80_EMAC_BP_U         0x46
#define EZ80_EMAC_RHBP_L       0x47
#define EZ80_EMAC_RHBP_H       0x48
#define EZ80_EMAC_RRP_L        0x49
#define EZ80_EMAC_RRP_H        0x4a
#define EZ80_EMAC_BUFSZ        0x4b
#define EZ80_EMAC_IEN          0x4c
#define EZ80_EMAC_ISTAT        0x4d
#define EZ80_EMAC_PRSD_L       0x4e
#define EZ80_EMAC_PRSD_H       0x4f
#define EZ80_EMAC_MIISTAT      0x50
#define EZ80_EMAC_RWP_L        0x51
#define EZ80_EMAC_RWP_H        0x52
#define EZ80_EMAC_TRP_L        0x53
#define EZ80_EMAC_TRP_H        0x54
#define EZ80_EMAC_BLKSLFT_L    0x55
#define EZ80_EMAC_BLKSLFT_H    0x56
#define EZ80_EMAC_FDATA_L      0x57
#define EZ80_EMAC_FDATA_H      0x58
#define EZ80_EMAC_FFLAGS       0x59
#define EZ80_EMAC_FLAGS        0x59

/* PLL Registers  *******************************************************************/

#define EZ80_PLL_DIV_L         0x5c
#define EZ80_PLL_DIV_H         0x5d
#define EZ80_PLL_CTL0          0x5e
#define EZ80_PLL_CTL1          0x5f

/* Timer Registers  *****************************************************************/

#define EZ80_TMR0_CTL          0x60        /* RW: Timer 0 control register */
#define EZ80_TMR0_IER          0x61        /* RW: Timer 0 interrupt enable register */
#define EZ80_TMR0_IIR          0x62        /* R : Timer 0 interrupt ID register */
#define EZ80_TMR0_DRL          0x63        /* R : Timer 0 data register (low) */
#define EZ80_TMR0_DRH          0x64        /* R : Timer 0 data register (high) */
#define EZ80_TMR0_RRL          0x63        /*  W: Timer 0 reload register (low) */
#define EZ80_TMR0_RRH          0x64        /*  W: Timer 0 reload register (high) */

#define EZ80_TMR1_CTL          0x65        /* RW: Timer 1 control register */
#define EZ80_TMR1_IER          0x66        /* RW: Timer 1 interrupt enable register */
#define EZ80_TMR1_IIR          0x67        /* R : Timer 1 interrupt ID register */
#define EZ80_TMR1_DRL          0x68        /* R : Timer 1 data register (low) */
#define EZ80_TMR1_DRH          0x69        /* R : Timer 1 data register (high) */
#define EZ80_TMR1_RRL          0x68        /*  W: Timer 1 reload register (low) */
#define EZ80_TMR1_RRH          0x69        /*  W: Timer 1 reload register (high) */
#define EZ80_TMR1_CAPCTL       0x6a        /* RW: Timer 1 input capture control register */
#define EZ80_TMR1_CAPAL        0x6b        /* R : Timer 1 capture input value A (low) */
#define EZ80_TMR1_CAPAH        0x6c        /* R : Timer 1 capture input value A (high) */
#define EZ80_TMR1_CAPBL        0x6d        /* R : Timer 1 capture input value B (low) */
#define EZ80_TMR1_CAPBH        0x6e

#define EZ80_TMR2_CTL          0x6f        /* RW: Timer 2 control register */
#define EZ80_TMR2_IER          0x70        /* RW: Timer 2 interrupt enable register */
#define EZ80_TMR2_IIR          0x71        /* R : Timer 2 interrupt ID register */
#define EZ80_TMR2_DRL          0x72        /* R : Timer 2 data register (low) */
#define EZ80_TMR2_DRH          0x73        /* R : Timer 2 data register (high) */
#define EZ80_TMR2_RRL          0x72        /*  W: Timer 2 reload register (low) */
#define EZ80_TMR2_RRH          0x73        /*  W: Timer 2 reload register (high) */

#define EZ80_TMR3_CTL          0x74        /* RW: Timer 3 control register */
#define EZ80_TMR3_IER          0x75        /* RW: Timer 3 interrupt enable register */
#define EZ80_TMR3_IIR          0x76        /* R : Timer 3 interrupt ID register */
#define EZ80_TMR3_DRL          0x77        /* R : Timer 3 data register (low) */
#define EZ80_TMR3_DRH          0x78        /* R : Timer 3 data register (high) */
#define EZ80_TMR3_RRL          0x77        /*  W: Timer 3 reload register (low) */
#define EZ80_TMR3_RRH          0x78        /*  W: Timer 3 reload register (high) */
#define EZ80_TMR3_CAPCTL       0x7b        /* RW: Timer 3 input capture control register */
#define EZ80_TMR3_CAPAL        0x7c        /* R : Timer 3 capture input value A (low) */
#define EZ80_TMR3_CAPAH        0x7d        /* R : Timer 3 capture input value A (high) */
#define EZ80_TMR3_CAPBL        0x7e        /* R : Timer 3 capture input value B (low) */
#define EZ80_TMR3_CAPBH        0x7f        /* R : Timer 3 capture input value B (high) */
#define EZ80_TMR3_OCCTL1       0x80        /* RW: Timer 3 output compare control register1 */
#define EZ80_TMR3_OCCTL2       0x81        /* RW: Timer 3 output compare control register2 */
#define EZ80_TMR3_OC0L         0x82        /* RW: Timer 3 output compare value 0 (low) */
#define EZ80_TMR3_OC0H         0x83        /* RW: Timer 3 output compare value 0 (high) */
#define EZ80_TMR3_OC1L         0x84        /* RW: Timer 3 output compare value 1 (low) */
#define EZ80_TMR3_OC1H         0x85        /* RW: Timer 3 output compare value 1 (high) */
#define EZ80_TMR3_OC2L         0x86        /* RW: Timer 3 output compare value 2 (low) */
#define EZ80_TMR3_OC2H         0x87        /* RW: Timer 3 output compare value 2 (high) */
#define EZ80_TMR3_OC3L         0x88        /* RW: Timer 3 output compare value 3 (low) */
#define EZ80_TMR3_OC3H         0x89        /* RW: Timer 3 output compare value 3 (high) */

/* TMR0/1/2/3 CTL Register Bit Definitions *******************************************/

#define EZ80_TMRCTL_BRKSTOP    0x80        /* Bit 7: Stop timer for debug operation */
#define EZ80_TMRCTL_CLKSEL     0x60        /* Bits 6-5: Timer source */
#  define EZ80_TMRCLKSEL_SYSCLK 0x00       /*   00: System clock divided by prescaler */
#  define EZ80_TMRCLKSEL_RTC   0x20        /*   01: Real time clock input */
#  define EZ80_TMRCLKSEL_ECF   0x40        /*   10: Event count input, falling edge */
#  define EZ80_TMRCLKSEL_ECR   0x60        /*   11: Event count input, rising edge */
#define EZ80_TMRCTL_CLKDIV     0x18        /* Bits 3-4: Sysem clock divider */
#  define EZ80_TMRCLKDIV_4     0x00        /*   00:   4 */
#  define EZ80_TMRCLKDIV_16    0x08        /*   01:  16 */
#  define EZ80_TMRCLKDIV_64    0x10        /*   10:  64 */
#  define EZ80_TMRCLKDIV_256   0x18        /*   11: 256 */
#define EZ80_TMRCTL_TIMCONT    0x04        /* Bit 2: Continusous mode */
#define EZ80_TMRCTL_RLD        0x02        /* Bit 1: Force reload */
#define EZ80_TMRCTL_TIMEN      0x01        /* Bit 0: Programmable reload timer enabled */

/* TMR0/1/2/3 IER Register Bit Definitions *******************************************/
                                           /* Bit 7: Reserved */
#define EZ80_TMRIER_OC3EN      0x40        /* Bit 6: TMR3 OC3 enabled */
#define EZ80_TMRIER_OC2EN      0x20        /* Bit 5: TMR3 OC2 enabled */
#define EZ80_TMRIER_OC1EN      0x10        /* Bit 4: TMR3 OC1 enabled */
#define EZ80_TMRIER_OC0EN      0x08        /* Bit 3: TMR3 OC0 enabled */
#define EZ80_TMRIER_ICBEN      0x04        /* Bit 2: TMR1/3 capture pin enabled */
#define EZ80_TMRIER_ICAEN      0x02        /* Bit 1: TMR1/3 capture pin enabled */
#define EZ80_TMRIER_EOCEN      0x01        /* Bit 0: End of count interrupt enabled */

/* TMR0/1/2/3 IER Register Bit Definitions *******************************************/
                                           /* Bit 7: Reserved */
#define EZ80_TMRIIR_OC3        0x40        /* Bit 6: TMR3 OC3 */
#define EZ80_TMRIIR_OC2        0x20        /* Bit 5: TMR3 OC2 */
#define EZ80_TMRIIR_OC1        0x10        /* Bit 4: TMR3 OC1 */
#define EZ80_TMRIIR_OC0        0x08        /* Bit 3: TMR3 OC0 */
#define EZ80_TMRIIR_ICB        0x04        /* Bit 2: TMR1/3 capture pin */
#define EZ80_TMRIIR_ICA        0x02        /* Bit 1: TMR1/3 capture pin */
#define EZ80_TMRIIR_EOC        0x01        /* Bit 0: End of count interrupt */

/* PWM Registers *********************************************************************/

#define EZ80_PWM_CTL1          0x79
#define EZ80_PWM_CTL2          0x7a
#define EZ80_PWM_CTL3          0x7b
#define EZ80_PWM0R_L           0x7c
#define EZ80_PWM0R_H           0x7d
#define EZ80_PWM1R_L           0x7e
#define EZ80_PWM1R_H           0x7f
#define EZ80_PWM2R_L           0x80
#define EZ80_PWM2R_H           0x81
#define EZ80_PWM3R_L           0x82
#define EZ80_PWM3R_H           0x83
#define EZ80_PWM0F_L           0x84
#define EZ80_PWM0F_H           0x85
#define EZ80_PWM1F_L           0x86
#define EZ80_PWM1F_H           0x87
#define EZ80_PWM2F_L           0x88
#define EZ80_PWM2F_H           0x89
#define EZ80_PWM3F_L           0x8a
#define EZ80_PWM3F_H           0x8b

/* WDT Registers *********************************************************************/

#define EZ80_WDT_CTL           0x93
#define EZ80_WDT_RR            0x94

/* GPIO Registers ********************************************************************/

#define EZ80_PA_DR             0x96
#define EZ80_PA_DDR            0x97
#define EZ80_PA_ALT0           0xa6
#define EZ80_PA_ALT1           0x98
#define EZ80_PA_ALT2           0x99
#define EZ80_PB_DR             0x9a
#define EZ80_PB_DDR            0x9b
#define EZ80_PB_ALT0           0xa7
#define EZ80_PB_ALT1           0x9c
#define EZ80_PB_ALT2           0x9d
#define EZ80_PC_DR             0x9e
#define EZ80_PC_DDR            0x9f
#define EZ80_PC_ALT0           0xce
#define EZ80_PC_ALT1           0xa0
#define EZ80_PC_ALT2           0xa1
#define EZ80_PD_DR             0xa2
#define EZ80_PD_DDR            0xa3
#define EZ80_PD_ALT0           0xcf
#define EZ80_PD_ALT1           0xa4
#define EZ80_PD_ALT2           0xa5

/* CS Registers **********************************************************************/

#define EZ80_CS0_LBR           0xa8
#define EZ80_CS0_UBR           0xa9
#define EZ80_CS0_CTL           0xaa
#define EZ80_CS1_LBR           0xab
#define EZ80_CS1_UBR           0xac
#define EZ80_CS1_CTL           0xad
#define EZ80_CS2_LBR           0xae
#define EZ80_CS2_UBR           0xaf
#define EZ80_CS2_CTL           0xb0
#define EZ80_CS3_LBR           0xb1
#define EZ80_CS3_UBR           0xb2
#define EZ80_CS3_CTL           0xb3

/* RAMCTL reggisters *****************************************************************/

#define EZ80_RAM_CTL           0xb4
#define EZ80_RAM_CTL0          0xb4
#define EZ80_RAM_ADDR_U        0xb5
#define EZ80_MBIST_GPR         0xb6
#define EZ80_MBIST_EMR         0xb7

/* SPI Registers *********************************************************************/

#define EZ80_SPI_BRG_L         0xb8
#define EZ80_SPI_BRG_H         0xb9
#define EZ80_SPI_CTL           0xba
#define EZ80_SPI_SR            0xbb
#define EZ80_SPI_RBR           0xbc
#define EZ80_SPI_TSR           0xbd

/* UART Register Offsets *************************************************************/
                                           /* DLAB=0: */
#define EZ80_UART_THR          0x00        /*    W: UART Transmit holding register */
#define EZ80_UART_RBR          0x00        /*   R : UART Receive buffer register */
#define EZ80_UART_IER          0x01        /*   RW: UART Interrupt enable register */
                                           /* DLAB=1: */
#define EZ80_UART_BRG          0x00        /*   RW: UART Baud rate generator register */
#define EZ80_UART_BRGL         0x00        /*   RW: UART Baud rate generator register (low) */
#define EZ80_UART_BRGH         0x01        /*   RW: UART Baud rate generator register (high) */
                                           /* DLAB=N/A: */
#define EZ80_UART_IIR          0x02        /*   R : UART Interrupt identification register */
#define EZ80_UART_FCTL         0x02        /*    W: UART FIFO control register */
#define EZ80_UART_LCTL         0x03        /*   RW: UART Line control register */
#define EZ80_UART_MCTL         0x04        /*   RW: UART Modem control register */
#define EZ80_UART_LSR          0x05        /*   R : UART Line status register */
#define EZ80_UART_MSR          0x06        /*   R : UART Modem status register */
#define EZ80_UART_SPR          0x07        /*   RW: UART Scratchpad register */

/* UART0/1 Base Register Addresses **************************************************/

#define EZ80_UART0_BASE        0xc0
#define EZ80_UART1_BASE        0xd0

/* UART0/1 IER register bits ********************************************************/

#define EZ80_UARTEIR_INTMASK   0x1f         /* Bits 5-7: Reserved */
#define EZ80_UARTEIR_TCIE      0x10         /* Bit 4: Transmission complete interrupt */
#define EZ80_UARTEIR_MIIE      0x08         /* Bit 3: Modem status input interrupt */
#define EZ80_UARTEIR_LSIE      0x04         /* Bit 2: Line status interrupt */
#define EZ80_UARTEIR_TIE       0x02         /* Bit 1: Transmit interrupt */
#define EZ80_UARTEIR_RIE       0x01         /* Bit 0: Receive interrupt */

/* UART0/1 IIR register bits ********************************************************/

#define EZ80_UARTIIR_FSTS      0x80         /* Bit 7: FIFO enable */
                                            /* Bits 4-6: Reserved */
#define EZ80_UARTIIR_INSTS     0x0e         /* Bits 1-3: Interrupt status code */
#  define EZ80_UARTINSTS_CTO   0x0c         /*   110: Character timeout */
#  define EZ80_UARTINSTS_TC    0x0a         /*   101: Transmission complete */
#  define EZ80_UARTINSTS_RLS   0x06         /*   011: Receiver line status */
#  define EZ80_UARTINSTS_RDR   0x04         /*   010: Receive data ready or trigger level */
#  define EZ80_UARTINSTS_TBE   0x02         /*   001: Transmisson buffer empty */
#  define EZ80_UARTINSTS_MS    0x00         /*   000: Modem status */
#define EZ80_UARTIIR_INTBIT    0x01         /* Bit 0: Active interrupt source */
#define EZ80_UARTIIR_CAUSEMASK 0x0f

/* UART0/1 FCTL register bits *******************************************************/

#define EZ80_UARTFCTL_TRIG     0xc0         /* Bits 6-7: UART recieve FIFO trigger level */
#  define EZ80_UARTTRIG_1      0x00         /*   00: Receive FIFO trigger level=1 */
#  define EZ80_UARTTRIG_4      0x40         /*   01: Receive FIFO trigger level=4 */
#  define EZ80_UARTTRIG_8      0x80         /*   10: Receive FIFO trigger level=8 */
#  define EZ80_UARTTRIG_14     0xc0         /*   11: Receive FIFO trigger level=14 */
                                            /* Bit 3-5: Reserved */
#define EZ80_UARTFCTL_CLRTxF   0x04         /* Bit 2: Transmit enable */
#define EZ80_UARTFCTL_CLRRxF   0x02         /* Bit 1: Receive enable */
#define EZ80_UARTFCTL_FIFOEN   0x01         /* Bit 0: Enable receive/transmit FIFOs */

/* UART0/1 LCTL register bits *******************************************************/

#define EZ80_UARTLCTL_DLAB     0x80         /* Bit 7: Enable access to baud rate generator */
#define EZ80_UARTLCTL_SB       0x40         /* Bit 6: Send break */
#define EZ80_UARTLCTL_FPE      0x20         /* Bit 5: Force parity error */
#define EZ80_UARTLCTL_EPS      0x10         /* Bit 4: Even parity select */
#define EZ80_UARTLCTL_PEN      0x08         /* Bit 3: Parity enable */
#define EZ80_UARTLCTl_2STOP    0x04         /* Bit 2: 2 stop bits */
#define EZ80_UARTLCTL_CHAR     0x03         /* Bits 0-2: Number of data bits */
#  define EZ80_UARTCHAR_5BITS  0x00         /*   00: 5 data bits */
#  define EZ80_UARTCHAR_6BITS  0x01         /*   01: 6 data bits */
#  define EZ80_UARTCHAR_7BITS  0x02         /*   10: 7 data bits */
#  define EZ80_UARTCHAR_8BITS  0x03         /*   11: 8 data bits */

#define EZ80_UARTLCTL_MASK     0x3f

/* UART0/1 MCTL register bits *******************************************************/
                                            /* Bit 7: Reserved */
#define EZ80_UARTMCTL_POLARITY 0x40         /* Bit 6: Invert polarity of RxD and TxD */
#define EZ80_UARTMCTL_MDM      0x20         /* Bit 5: Multi-drop mode enable */
#define EZ80_UARTMCTL_LOOP     0x10         /* Bit 4: Loopback mode enable */
#define EZ80_UARTMCTL_OUT2     0x08         /* Bit 3: (loopback mode only) */
#define EZ80_UARTMCTL_OUT1     0x04         /* Bit 2: (loopback mode only) */
#define EZ80_UARTMCTL_RTS      0x02         /* Bit 1: Request to send */
#define EZ80_UARTMCTL_DTR      0x01         /* Bit 0: Data termnal read */

/* UART0/1 LSR register bits ********************************************************/

#define EZ80_UARTLSR_ERR       0x80         /* Bit 7: Error detected in FIFO */
#define EZ80_UARTLSR_TEMT      0x40         /* Bit 6: Transmit FIFO empty and idle */
#define EZ80_UARTLSR_THRE      0x20         /* Bit 5: Transmit FIFO empty */
#define EZ80_UARTLSR_BI        0x10         /* Bit 4: Break on input */
#define EZ80_UARTLSR_FE        0x08         /* Bit 3: Framing error */
#define EZ80_UARTLSR_PE        0x04         /* Bit 2: Parity error */
#define EZ80_UARTLSR_OE        0x02         /* Bit 1: Overrun error */
#define EZ80_UARTLSR_DR        0x01         /* Bit 0: Data ready */

/* UART0/1 MSR register bits ********************************************************/

#define EZ80_UARTMSR_DCD       0x80         /* Bit 7: Data carrier detect */
#define EZ80_UARTMSR_RI        0x40         /* Bit 6: Ring indicator */
#define EZ80_UARTMSR_DSR       0x20         /* Bit 5: Data set ready */
#define EZ80_UARTMSR_CTS       0x10         /* Bit 4: Clear to send */
#define EZ80_UARTMSR_DDCD      0x08         /* Bit 3: Delta on DCD input */
#define EZ80_UARTMSR_TERI      0x04         /* Bit 2: Trailing edge change on RI */
#define EZ80_UARTMSR_DDSR      0x02         /* Bit 1: Delta on DSR input */
#define EZ80_UARTMSR_DCTS      0x01         /* Bit 0: Delta on CTS input */

/* IR Registers  ********************************************************************/

#define EZ80_IR_CTL            0xbf

/* I2C Registers  *******************************************************************/

#define EZ80_I2C_SAR           0xc8
#define EZ80_I2C_XSAR          0xc9
#define EZ80_I2C_DR            0xca
#define EZ80_I2C_CTL           0xcb
#define EZ80_I2C_SR            0xcc
#define EZ80_I2C_CCR           0xcd
#define EZ80_I2C_SRR           0xce

/* CLK Registers  *******************************************************************/

#define EZ80_CLK_PPD1          0xdb
#define EZ80_CLK_PPD2          0xdc

/* RTC Registers  *******************************************************************/

#define EZ80_RTC_SEC           0xe0
#define EZ80_RTC_MIN           0xe1
#define EZ80_RTC_HRS           0xe2
#define EZ80_RTC_DOW           0xe3
#define EZ80_RTC_DOM           0xe4
#define EZ80_RTC_MON           0xe5
#define EZ80_RTC_YR            0xe6
#define EZ80_RTC_CEN           0xe7
#define EZ80_RTC_ASEC          0xe8
#define EZ80_RTC_AMIN          0xe9
#define EZ80_RTC_AHRS          0xea
#define EZ80_RTC_ADOW          0xeb
#define EZ80_RTC_ACTRL         0xec
#define EZ80_RTC_CTRL          0xed

/* CSBMC Registers  *****************************************************************/

#define EZ80_CS0_BMC           0xf0
#define EZ80_CS1_BMC           0xf1
#define EZ80_CS2_BMC           0xf2
#define EZ80_CS3_BMC           0xf3

/* FLASH Registers  *****************************************************************/

#define EZ80_FLASH_KEY         0xf5
#define EZ80_FLASH_DATA        0xf6
#define EZ80_FLASH_ADDR_U      0xf7
#define EZ80_FLASH_CTRL        0xf8
#define EZ80_FLASH_FDIV        0xf9
#define EZ80_FLASH_PROT        0xfa
#define EZ80_FLASH_INTC        0xfb
#define EZ80_FLASH_PAGE        0xfc
#define EZ80_FLASH_ROW         0xfd
#define EZ80_FLASH_COL         0xfe
#define EZ80_FLASH_PGCTL       0xff

/************************************************************************************
 * Public Function Prototypes
 ************************************************************************************/

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

#undef EXTERN
#ifdef __cplusplus
}
#endif
#endif

#endif  /* __ARCH_Z80_SRC_EZ80_EZ80F91_H */
