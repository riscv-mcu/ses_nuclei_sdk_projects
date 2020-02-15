#ifndef __USBD_CONF_H
#define __USBD_CONF_H

#include "usb_conf.h"

#define USBD_CFG_MAX_NUM                    1
#define USBD_ITF_MAX_NUM                    1

#define USB_STR_DESC_MAX_SIZE               64

#define USB_STRING_COUNT                    4U

/* endpoint count used by the CDC ACM device */
#define CDC_ACM_CMD_EP                     EP2_IN
#define CDC_ACM_DATA_IN_EP                 EP1_IN
#define CDC_ACM_DATA_OUT_EP                EP3_OUT

#define CDC_ACM_CMD_PACKET_SIZE            8
#define CDC_ACM_DATA_PACKET_SIZE           64

#endif /* __USBD_CONF_H */

