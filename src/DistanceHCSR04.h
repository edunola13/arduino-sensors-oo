#ifndef DistanceHCSR04_h
#define DistanceHCSR04_h
//#include "WConstants.h"
#include <Arduino.h>
#include <ComponentAbstract.h>

class DistanceHCSR04: public SensorInterface{
  protected:
  	uint8_t pinEcho, pinTrig;
  	float distance;

  public:
    uint8_t type = 0;

  	DistanceHCSR04();
  	DistanceHCSR04(uint8_t pinEcho, uint8_t pinTrig, uint8_t type=0);
  	void begin();
  	void begin(uint8_t pinEcho, uint8_t pinTrig, uint8_t type=0);
  	void stop();

  	uint8_t getCode();

  	uint8_t getPinEcho();
  	void setPinEcho(uint8_t pinEcho);
  	uint8_t getPinTrig();
  	void setPinTrig(uint8_t pinTrig);
  	float getDistance();

  	//SensorInterface
  	void updateSensor();
  	int getLevel(uint8_t type=0);
  	//JsonInterface
  	// void jsonProperties(String &value);
  	// void parseJson(String* json);
  	//EEPROM
  	uint8_t positions();
  	void readFromEeprom(int pos);
  	void saveInEeprom(int pos);
};

#endif
