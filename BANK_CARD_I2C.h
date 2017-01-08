//
#ifndef BANK_CARD_I2C_H //
#define BANK_CARD_I2C_H //

//
#include<BANK_CARD_I2C.h> //
#include<Arduino.h> //
#include"BANK_CARD_I2C.h" //
#include"Arduino.h" //

#define BANK_CARD_I2C_SDA //
#define BANK_CARD_I2C_SCL //

class BANK_CARD_I2C{

public:
  //
BANK_CARD_I2C(uint8_t BANK_CARD_I2C_DATA, uint8_t BANK_CARD_I2C_CLK);
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
  bool account(); //
  void enter(); //
  void cancel(); //
  void blockCard(); //
  void unblockCard(); //
  bool check();
  bool verify();

protected:
  //
bool passwordRelease(); //
bool hacking(); //
void digitalSignature(); //

}
extern BANK_CARD_I2Cclass;
#endif; //
