/*
 * RP2350 Compatibility Header for FreeRTOS
 * Provides compatibility definitions for RP2040 FreeRTOS port running on RP2350
 */

#ifndef RP2350_COMPAT_H
#define RP2350_COMPAT_H

#include "hardware/regs/intctrl.h"

/* RP2350 uses different IRQ numbers for SIO
 * Map RP2040 names to RP2350 equivalents for FreeRTOS compatibility
 */
#ifndef SIO_IRQ_PROC0
    #define SIO_IRQ_PROC0 SIO_IRQ_FIFO
#endif

#ifndef SIO_IRQ_PROC1
    #define SIO_IRQ_PROC1 SIO_IRQ_FIFO  /* Both cores share same FIFO IRQ */
#endif

#endif /* RP2350_COMPAT_H */
