#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Homebug (Pty) Ltd."
#define PRODUCT_NAME "Ebug V3"
#define VOLUME_LABEL "Ebug V3"

#define BOARD_ID "SAMD21G18A-ebug-v3"

// README: Thus, it's best to set the USB ID to one for which there are no drivers.
//#define USB_VID 0x2341
//#define USB_PID 0x024D

#define LED_PIN PIN_PA11
#define LED_TX_PIN PIN_PA27
#define LED_RX_PIN PIN_PB28

#endif
