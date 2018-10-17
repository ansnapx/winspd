/**
 * @file sys/io.c
 *
 * @copyright 2018 Bill Zissimopoulos
 */
/*
 * This file is part of WinSpd.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 *
 * Licensees holding a valid commercial license may use this software
 * in accordance with the commercial license agreement provided in
 * conjunction with the software.  The terms and conditions of any such
 * commercial license agreement shall govern, supersede, and render
 * ineffective any application of the GPLv3 license to this software,
 * notwithstanding of any reference thereto in the software or
 * associated repository.
 */

#include <sys/driver.h>

BOOLEAN SpdHwStartIo(PVOID DeviceExtension, PSCSI_REQUEST_BLOCK Srb)
{
    SPD_ENTER(io,
        ASSERT(DISPATCH_LEVEL >= KeGetCurrentIrql()));

    SPD_LEAVE(io,
        "DeviceExtension=%p, %s", " = %s%s",
        DeviceExtension, SrbFunctionSym(Srb->Function),
        SrbStatusSym(Srb->SrbStatus), SrbStatusMaskSym(Srb->SrbStatus));

    return TRUE;
}
