//-------------------------------------------------------------
// Library      : 7 Segment Driver CD4094 Shift Register
// Writer       : Irfan Indra Kurniawan, ST.
// Website      : https://www.fanselectronics.com
// Repository   : https://github.com/IrfanIndraKurniawan/FansElectronics_7Segment_CD4094
// Build Date   : 25 Februari 2023
//-------------------------------------------------------------
#ifdef FansElectronics_7SegCD4094_h
#define FansElectronics_7SegCD4094_h

#include "Arduino.h"

#define ANODE 1
#define CATHODE 0

class FansElectronics_7SegCD4094
{
public:
    FansElectronics_7SegCD4094(uint8_t digit_num, bool type_segment);
    void begin(uint8_t data_pin, uint8_t clock_pin, uint8_t strobe_pin);

    void clear();
    void onAll();

    void print(char _ch);
    void print(int _val);
    void print(long _val);
    void print(float _val);
    void print(float _val, uint8_t _dec);
    void print(String _str);

private:
    bool _type_segment;
    uint8_t _digit_num;
    uint8_t _data_pin;
    uint8_t _clock_pin;
    uint8_t _stb_pin;

    void setDigitMap(char ch[]);
};

#endif