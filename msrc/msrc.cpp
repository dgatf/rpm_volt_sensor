#include "msrc.h"

#if !defined(__AVR_ATmega328P__) && !defined(__AVR_ATmega328PB__) && !defined(__AVR_ATmega2560__) && !defined(__AVR_ATmega32U4__) && !defined(__MKL26Z64__) && !defined(__MK20DX128__) && !defined(__MK20DX256__) && !defined(__MK64FX512__) && !defined(__MK66FX1M0__)
#warning "MCU not supported"
#endif

// ISR handlers

#if defined(__AVR_ATmega328P__) && !defined(ARDUINO_AVR_A_STAR_328PB)
void (*TIMER1_CAPT_handlerP)() = NULL;
ISR(TIMER1_CAPT_vect)
{
    if (TIMER1_CAPT_handlerP)
        TIMER1_CAPT_handlerP();
}
void (*TIMER1_COMPB_handlerP)() = NULL;
ISR(TIMER1_COMPB_vect)
{
    if (TIMER1_COMPB_handlerP)
        TIMER1_COMPB_handlerP();
}
void (*TIMER1_OVF_handlerP)() = NULL;
ISR(TIMER1_OVF_vect)
{
    if (TIMER1_OVF_handlerP)
        TIMER1_OVF_handlerP();
}
void (*INT0_handlerP)() = NULL;
ISR(INT0_vect)
{
    if (INT0_handlerP)
        INT0_handlerP();
}
void (*TIMER2_COMPA_handlerP)() = NULL;
ISR(TIMER2_COMPA_vect)
{
    if (TIMER2_COMPA_handlerP)
        TIMER2_COMPA_handlerP();
}
#endif

#if defined(__AVR_ATmega328PB__) || defined(ARDUINO_AVR_A_STAR_328PB)
void (*TIMER1_CAPT_handlerP)() = NULL;
ISR(TIMER1_CAPT_vect)
{
    if (TIMER1_CAPT_handlerP)
        TIMER1_CAPT_handlerP();
}
void (*TIMER1_COMPB_handlerP)() = NULL;
ISR(TIMER1_COMPB_vect)
{
    if (TIMER1_COMPB_handlerP)
        TIMER1_COMPB_handlerP();
}
void (*TIMER1_OVF_handlerP)() = NULL;
ISR(TIMER1_OVF_vect)
{
    if (TIMER1_OVF_handlerP)
        TIMER1_OVF_handlerP();
}
void (*TIMER2_COMPA_handlerP)() = NULL;
ISR(TIMER2_COMPA_vect)
{
    if (TIMER2_COMPA_handlerP)
        TIMER2_COMPA_handlerP();
}
void (*TIMER4_COMPB_handlerP)() = NULL;
ISR(TIMER4_COMPB_vect)
{
    if (TIMER4_COMPB_handlerP)
        TIMER4_COMPB_handlerP();
}
void (*TIMER4_CAPT_handlerP)() = NULL;
ISR(TIMER4_CAPT_vect)
{
    if (TIMER4_CAPT_handlerP)
        TIMER4_CAPT_handlerP();
}
#endif

#if defined(__AVR_ATmega2560__)
void (*TIMER4_CAPT_handlerP)() = NULL;
ISR(TIMER4_CAPT_vect)
{
    if (TIMER4_CAPT_handlerP)
        TIMER4_CAPT_handlerP();
}
void (*TIMER4_COMPB_handlerP)() = NULL;
ISR(TIMER4_COMPB_vect)
{
    if (TIMER4_COMPB_handlerP)
        TIMER4_COMPB_handlerP();
}
void (*TIMER4_OVF_handlerP)() = NULL;
ISR(TIMER4_OVF_vect)
{
    if (TIMER4_OVF_handlerP)
        TIMER4_OVF_handlerP();
}
void (*TIMER5_COMPB_handlerP)() = NULL;
ISR(TIMER5_COMPB_vect)
{
    if (TIMER5_COMPB_handlerP)
        TIMER5_COMPB_handlerP();
}
void (*TIMER5_COMPC_handlerP)() = NULL;
ISR(TIMER5_COMPC_vect)
{
    if (TIMER5_COMPC_handlerP)
        TIMER5_COMPC_handlerP();
}
void (*TIMER5_CAPT_handlerP)() = NULL;
ISR(TIMER5_CAPT_vect)
{
    if (TIMER5_CAPT_handlerP)
        TIMER5_CAPT_handlerP();
}
void (*TIMER2_COMPA_handlerP)() = NULL;
ISR(TIMER2_COMPA_vect)
{
    if (TIMER2_COMPA_handlerP)
        TIMER2_COMPA_handlerP();
}
#endif

#if defined(__AVR_ATmega32U4__)
void (*TIMER1_CAPT_handlerP)() = NULL;
ISR(TIMER1_CAPT_vect)
{
    if (TIMER1_CAPT_handlerP)
        TIMER1_CAPT_handlerP();
}
void (*TIMER1_COMPB_handlerP)() = NULL;
ISR(TIMER1_COMPB_vect)
{
    if (TIMER1_COMPB_handlerP)
        TIMER1_COMPB_handlerP();
}
void (*TIMER1_OVF_handlerP)() = NULL;
ISR(TIMER1_OVF_vect)
{
    if (TIMER1_OVF_handlerP)
        TIMER1_OVF_handlerP();
}
void (*TIMER1_COMPC_handlerP)() = NULL;
ISR(TIMER1_COMPC_vect)
{
    if (TIMER1_COMPC_handlerP)
        TIMER1_COMPC_handlerP();
}
void (*TIMER3_COMPB_handlerP)() = NULL;
ISR(TIMER3_COMPB_vect)
{
    if (TIMER3_COMPB_handlerP)
        TIMER3_COMPB_handlerP();
}
void (*TIMER3_CAPT_handlerP)() = NULL;
ISR(TIMER3_CAPT_vect)
{
    if (TIMER3_CAPT_handlerP)
        TIMER3_CAPT_handlerP();
}
void (*TIMER3_OVF_handlerP)() = NULL;
ISR(TIMER3_OVF_vect)
{
    if (TIMER3_OVF_handlerP)
        TIMER3_OVF_handlerP();
}
#endif

#if defined(__MKL26Z64__) || defined(__MK20DX128__) || defined(__MK20DX256__) || defined(__MK64FX512__) || defined(__MK66FX1M0__)
void (*FTM0_IRQ_handlerP)() = NULL;
void ftm0_isr()
{
    if (FTM0_IRQ_handlerP)
        FTM0_IRQ_handlerP();
}
void (*FTM1_IRQ_handlerP)() = NULL;
void ftm1_isr()
{
    if (FTM1_IRQ_handlerP)
        FTM1_IRQ_handlerP();
}
#endif

void setup()
{
#if defined(DEBUG) || defined(DEBUG_ESC) || defined(DEBUG_ESC_PWM) || defined(DEBUG_ESC_RX) || defined(DEBUG_PLOTTER) || defined(DEBUG_GPS) || defined(DEBUG_EEPROM_WRITE) || defined(DEBUG_EEPROM_READ) || defined(DEBUG_P)
    // DEBUG is on Serial
    // Baud rate depends on whats connected to Serial
    // For boards with 1 UART: If is an ESC serial it will be changed to 19600. If it is a GPS, to 9600 (default)
    // Otherwise it is at 115200
    DEBUG_SERIAL.begin(115200);
    while (!DEBUG_SERIAL)
        ;
    DEBUG_SERIAL.print("\nV");
    DEBUG_SERIAL.print(VERSION_MAJOR);
    DEBUG_SERIAL.print(".");
    DEBUG_SERIAL.print(VERSION_MINOR);
    DEBUG_SERIAL.print(".");
    DEBUG_SERIAL.println(VERSION_PATCH);
#endif
    Config config = {CONFIG_AIRSPEED, CONFIG_GPS, CONFIG_VOLTAGE1, CONFIG_VOLTAGE2, CONFIG_CURRENT, CONFIG_NTC1, CONFIG_NTC2, CONFIG_PWMOUT, {CONFIG_REFRESH_RPM, CONFIG_REFRESH_VOLT, CONFIG_REFRESH_CURR, CONFIG_REFRESH_TEMP}, {CONFIG_AVERAGING_ELEMENTS_RPM, CONFIG_AVERAGING_ELEMENTS_VOLT, CONFIG_AVERAGING_ELEMENTS_CURR, CONFIG_AVERAGING_ELEMENTS_TEMP}, CONFIG_ESC_PROTOCOL, CONFIG_I2C1_TYPE, CONFIG_I2C1_ADDRESS, 0, 0, SENSOR_ID};
#if defined(CONFIG_LUA)
    ConfigEeprom configEeprom;
    config = configEeprom.readConfig();
#endif
    if (config.pwmOut)
        pwmOut.enable();
#if RX_PROTOCOL != RX_XBUS
    Wire.begin();
    Wire.setTimeout(WIRE_TIMEOUT);
#endif
#if RX_PROTOCOL == RX_SMARTPORT
#if defined(__MKL26Z64__) || defined(__MK20DX128__) || defined(__MK20DX256__) || defined(__MK64FX512__) || defined(__MK66FX1M0__)
    SMARTPORT_SRXL_FRSKY_SERIAL.begin(57600, SERIAL_8N1_RXINV_TXINV);
#else
    SMARTPORT_SRXL_FRSKY_SERIAL.begin(57600);
#endif
    smartport.begin();
#endif
#if RX_PROTOCOL == RX_XBUS
    xbus.begin();
#endif
#if RX_PROTOCOL == RX_SRXL
    SMARTPORT_SRXL_FRSKY_SERIAL.begin(115200);
    SMARTPORT_SRXL_FRSKY_SERIAL.setTimeout(SRXLSERIAL_TIMEOUT);
    srxl.begin();
#endif
#if RX_PROTOCOL == RX_FRSKY
#if defined(__MKL26Z64__) || defined(__MK20DX128__) || defined(__MK20DX256__) || defined(__MK64FX512__) || defined(__MK66FX1M0__)
    SMARTPORT_SRXL_FRSKY_SERIAL.begin(9600, SERIAL_8N1_RXINV_TXINV);
#else
    SMARTPORT_SRXL_FRSKY_SERIAL.begin(9600);
#endif
    frsky.begin();
#endif
#if RX_PROTOCOL == RX_IBUS
    SMARTPORT_SRXL_FRSKY_SERIAL.begin(115200);
    SMARTPORT_SRXL_FRSKY_SERIAL.setTimeout(IBUS_TIMEOUT);
    ibus.begin();
#endif
}

void loop()
{
#if RX_PROTOCOL == RX_SMARTPORT
    smartport.update();
#endif
#if RX_PROTOCOL == RX_XBUS
    xbus.update();
#endif
#if RX_PROTOCOL == RX_SRXL
    srxl.update();
    srxl.checkSerial();
#endif
#if RX_PROTOCOL == RX_FRSKY
    frsky.update();
#endif
#if RX_PROTOCOL == RX_IBUS
    ibus.update();
#endif
    pwmOut.update();
}