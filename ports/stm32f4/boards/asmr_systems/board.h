#ifndef BOARD_H_
#define BOARD_H_


//:::: Flash size of the board
//::::::::::::::::::::::::::::

#define BOARD_FLASH_SIZE  (1024 * 1024)


//:::: USB UF2
//::::::::::::

// see https://pid.codes/1209/0001/
#define USB_VID 0x1209   // pid.codes
#define USB_PID 0x0001   // test PID
#define USB_MANUFACTURER  "ASMR SYSTEMS"
#define USB_PRODUCT       "ASMR R&D"

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID      "STM32F405-ASMR"
#define UF2_VOLUME_LABEL  "ASMRBOOT"
#define UF2_INDEX_URL     "https://asmr.systems"


//:::: LED
//::::::::
#define LED_PORT              GPIOC
#define LED_PIN               GPIO_PIN_1
#define LED_STATE_ON          1


#endif
