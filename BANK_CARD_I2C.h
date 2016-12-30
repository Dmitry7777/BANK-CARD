//
#ifndef BANK_CARD_I2C_H //
#define BANK_CARD_I2C_H //

//
#include<BANK_CARD_I2C.h> //
#include<Arduino.h> //
#include<BANK_CARD_I2C.h> //
#include<Arduino.h> //

#define BANK_CARD_I2C_SDA //
#define BANK_CARD_I2C_SCL //

class BANK_CARD_I2C{


public:
  //
  void begin(); //
  void end(); //
  void read(); //
  void write(); //
  void clear(); //
  void set(); //
  void print(); //
  void println(); //

private:
  //
  bool password(); //
  void enter(); //
  void cancel(); //
  void blockCard(); //

protected:
  //
bool passwordRelease(); //
bool hacking(); //
void digitalSignature(); //
  
}
extern BANK_CARD_I2Cclass;
#endif; //
