#ifndef ESP32_BLE_KEYBOARD_OUTPUT_CALLBACKS_H
#define ESP32_BLE_KEYBOARD_OUTPUT_CALLBACKS_H
#include "sdkconfig.h"
#if defined(CONFIG_BT_ENABLED)

#include <NimBLEServer.h>
#include "NimBLECharacteristic.h"

class KeyboardOutputCallbacks : public NimBLECharacteristicCallbacks
{
public:
  KeyboardOutputCallbacks(void);
  void onWrite(NimBLECharacteristic* me);
};

#endif // CONFIG_BT_ENABLED
#endif // ESP32_BLE_KEYBOARD_OUTPUT_CALLBACKS_H
