/*
 * Copyright © 2017-2021 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_CLOCK_SUN8I_R_CCU_H
#define DRIVERS_CLOCK_SUN8I_R_CCU_H

enum {
	CLK_OSC16M,
	CLK_OSC24M,
	CLK_OSC32K,
	CLK_AR100,
	CLK_AHB0,
	CLK_APB0,
	CLK_BUS_R_PIO,
	CLK_BUS_R_CIR,
	CLK_BUS_R_TIMER,
#if CONFIG(HAVE_RSB)
	CLK_BUS_R_RSB,
#endif
	CLK_BUS_R_UART,
	CLK_BUS_R_I2C,
	CLK_BUS_R_TWD,
	CLK_R_CIR,
	SUN8I_R_CCU_CLOCKS
};

#endif /* DRIVERS_CLOCK_SUN8I_R_CCU_H */
