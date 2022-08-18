/*
 * Copyright (c) 2022, sakumisu
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef USBD_CDC_H
#define USBD_CDC_H

#include "usb_cdc.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Register api */
void usbd_cdc_add_acm_interface(usbd_class_t *devclass, usbd_interface_t *intf);

/* Setup request command callback api */
void usbd_cdc_acm_set_line_coding(uint8_t intf, uint32_t baudrate, uint8_t databits, uint8_t parity, uint8_t stopbits);
void usbd_cdc_acm_set_dtr(uint8_t intf, bool dtr);
void usbd_cdc_acm_set_rts(uint8_t intf, bool rts);

#ifdef __cplusplus
}
#endif

#endif /* USBD_CDC_H */
