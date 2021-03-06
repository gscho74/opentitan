// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/arch/device.h"

/**
 * Device-specific symbol definitions for the Verilator device.
 */

const device_type_t kDeviceType = kDeviceSimDV;

// TODO: DV testbench completely randomizes these. Need to add code to
// retrieve these from a preloaded memory location set by the testbench.

const uint64_t kClockFreqCpuHz = 50 * 1000 * 1000;  // 50MHz

const uint64_t kClockFreqPeripheralHz = 50 * 1000 * 1000;  // 50MHz

const uint64_t kClockFreqUsbHz = 48 * 1000 * 1000;  // 48MHz

const uint64_t kUartBaudrate = 2 * (1 << 20);  // 2Mib/s

// No Device Stop Address in our DV simulator.
const uintptr_t kDeviceStopAddress = 0;
