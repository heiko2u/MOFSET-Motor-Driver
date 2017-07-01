#include "DualMC33926MotorShield.h"

// Constructors ////////////////////////////////////////////////////////////////

DualMC33926MotorShield::DualMC33926MotorShield()
{
  //Pin map motor sheild 1
_M1DIR = 53; 
_M1FB = A1; 
_M2DIR = 50;
_M2FB = A2;  
_nD2 =52;  
_nSF = 51;
  
 

//pin map motor sheild 2

_M1DIR2=45;
_M1FB2=A3;
_M2DIR2=42;
_M2FB2=A4;
_nD22=44;
_nSF2=43;



//pin map motor sheild 3


_M1DIR3=37;
_M1FB3=A5;
_M2DIR3=34;
_M2FB3=A6;
_nD23=36;
_nSF3=35;




//default pwm motor sheild 1
_M1PWM = 12;
_M2PWM = 11;


// default pwm motor sheild 2
_M1PWM2 = 10;
_M2PWM2 = 9;


//default pwm motor sheild 3

_M1PWM3 = 7;
_M2PWM3 = 6;

}


DualMC33926MotorShield::DualMC33926MotorShield(unsigned char M1DIR2,unsigned char M1PWM2,unsigned char  M1FB2,unsigned char M2DIR2,unsigned char M2PWM2,unsigned char M2FB2,unsigned char nD22,unsigned char nSF2,unsigned char M1DIR3,unsigned char M1PWM3,unsigned char M1FB3,unsigned char M2DIR3,unsigned char M2PWM3,unsigned char M2FB3,unsigned char nD23,unsigned char nSF3)
{
  //NEw shield 2 and 3 
  

_M1DIR = 53;
 _nD2 = 52;
  
  _M2DIR = 50;
  _nSF = 51;
  _M1FB = A1;
  _M2FB = A2;


  _nD22 = nD22;
  _M1DIR2 = M1DIR2;
  _M2DIR2 = M2DIR2;
  _nSF2 = nSF2;
  _M1FB2 = M1FB2; 
  _M2FB2 = M2FB2;

_nD23 = nD23;
  _M1DIR3 = M1DIR3;
  _M2DIR3 = M2DIR3;
  _nSF3 = nSF3;
  _M1FB3 = M1FB3; 
  _M2FB3 = M2FB3;



_M1PWM = 12;
_M2PWM = 11;

_M1PWM2 = M1PWM2;
_M2PWM2 = M2PWM2;

_M1PWM3 = M1PWM3;
_M2PWM3 = M2PWM3;





}



DualMC33926MotorShield::DualMC33926MotorShield(unsigned char M1DIR,  unsigned char M1FB, unsigned char M2DIR,  unsigned char M2FB,unsigned char nD2, unsigned char nSF,unsigned char M1DIR2,unsigned char  M1FB2,unsigned char M2DIR2,unsigned char M2FB2,unsigned char nD22,unsigned char nSF2,unsigned char M1DIR3,unsigned char M1FB3,unsigned char M2DIR3,unsigned char M2FB3,unsigned char nD23,unsigned char nSF3)
{
  //copy paste of first constructor in .cpp  COMPARE, VNH5019 LINE 64- 94
_M1DIR = M1DIR; 
_M1FB = M1FB; 
_M2DIR = M2DIR;
_M2FB = M2FB;  
_nD2 = nD2;  
_nSF = nSF;
  
 

//pin map motor sheild 2

_M1DIR2=M1DIR2;
_M1FB2=M1FB2;
_M2DIR2=M2DIR2;
_M2FB2=M2FB2;
_nD22=nD22;
_nSF2=nSF2;



//pin map motor sheild 3


_M1DIR3=M1DIR3;
_M1FB3=M1FB3;
_M2DIR3=M2DIR3;
_M2FB3=M2FB2;
_nD23=nD23;
_nSF3=nSF3;



_M1PWM = 12;
_M2PWM = 11;


// default pwm motor sheild 2
_M1PWM2 = 10;
_M2PWM2 = 9;


//default pwm motor sheild 3

_M1PWM3 = 7;
_M2PWM3 = 6;

}


DualMC33926MotorShield::DualMC33926MotorShield(unsigned char M1DIR,  unsigned char M1FB, unsigned char M2DIR,  unsigned char M2FB,unsigned char nD2, unsigned char nSF,unsigned char M1DIR2,unsigned char  M1FB2,unsigned char M2DIR2,unsigned char M2FB2,unsigned char nD22,unsigned char nSF2,unsigned char M1DIR3,unsigned char M1FB3,unsigned char M2DIR3,unsigned char M2FB3,unsigned char nD23,unsigned char nSF3, unsigned char M1PWM, unsigned char M2PWM,unsigned char M1PWM2,unsigned char M2PWM2,unsigned char M1PWM3,unsigned char M2PWM3) 
//PWM ALL INCLUDED FROM .CPP FILE

{
_M1DIR = M1DIR; 
_M1FB = M1FB; 
_M2DIR = M2DIR;
_M2FB = M2FB;  
_nD2 = nD2;  
_nSF = nSF;
  
 

//pin map motor sheild 2

_M1DIR2=M1DIR2;
_M1FB2=M1FB2;
_M2DIR2=M2DIR2;
_M2FB2=M2FB2;
_nD22=nD22;
_nSF2=nSF2;



//pin map motor sheild 3


_M1DIR3=M1DIR3;
_M1FB3=M1FB3;
_M2DIR3=M2DIR3;
_M2FB3=M2FB2;
_nD23=nD23;
_nSF3=nSF3;



_M1PWM = M1PWM;
_M2PWM = M2PWM;





// default pwm motor sheild 2
_M1PWM2 = M1PWM2;
_M2PWM2 = M2PWM2;


//default pwm motor sheild 3

_M1PWM3 = M1PWM3;
_M2PWM3 = M2PWM3;




}



// Public Methods //////////////////////////////////////////////////////////////
void DualMC33926MotorShield::init()
{
// Define pinMode for the pins and set the frequency for timer1.

  pinMode(_M1DIR,OUTPUT);
  pinMode(_M1PWM,OUTPUT);
  pinMode(_M1FB,INPUT);
  pinMode(_M2DIR,OUTPUT);
  pinMode(_M2PWM,OUTPUT);
  pinMode(_M2FB,INPUT);
  pinMode(_nD2,OUTPUT);
  digitalWrite(_nD2,HIGH); // default to on
  pinMode(_nSF,INPUT);

  pinMode(_M1DIR2,OUTPUT);
  pinMode(_M1PWM2,OUTPUT);
  pinMode(_M1FB2,INPUT);
  pinMode(_M2DIR2,OUTPUT);
  pinMode(_M2PWM2,OUTPUT);
  pinMode(_M2FB2,INPUT);
  pinMode(_nD22,OUTPUT);
  digitalWrite(_nD22,HIGH); // default to on
  pinMode(_nSF2,INPUT);

  pinMode(_M1DIR3,OUTPUT);
  pinMode(_M1PWM3,OUTPUT);
  pinMode(_M1FB3,INPUT);
  pinMode(_M2DIR3,OUTPUT);
  pinMode(_M2PWM3,OUTPUT);
  pinMode(_M2FB3,INPUT);
  pinMode(_nD23,OUTPUT);
  digitalWrite(_nD23,HIGH); // default to on
  pinMode(_nSF3,INPUT);










  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  // Timer 1 configuration
  // prescaler: clockI/O / 1
  // outputs enabled
  // phase-correct PWM
  // top of 400
  //
  // PWM frequency calculation
  // 16MHz / 1 (prescaler) / 2 (phase-correct) / 400 (top) = 20kHz
  TCCR1A = 0b10100000;
  TCCR1B = 0b00010001;
  ICR1 = 400;
  #endif
}



// Set speed for motor 1, speed is a number betwenn -400 and 400


void DualMC33926MotorShield::setM1Speed(int speed)
{
  unsigned char reverse = 0;
  
  if (speed < 0)
  {
    speed = -speed;  // Make speed a positive quantity
    reverse = 1;  // Preserve the direction
  }
  if (speed > 400)  // Max PWM dutycycle
    speed = 400;
  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  OCR1A = speed;
  #else
  analogWrite(_M1PWM,speed * 51 / 80); // default to using analogWrite, mapping 400 to 255
  #endif
  if (reverse)
    digitalWrite(_M1DIR,HIGH);
  else
    digitalWrite(_M1DIR,LOW);
}






// Set speed for motor 2, speed is a number betwenn -400 and 400
void DualMC33926MotorShield::setM2Speed(int speed)
{
  unsigned char reverse = 0;
  
  if (speed < 0)
  {
    speed = -speed;  // Make speed a positive quantity
    reverse = 1;  // Preserve the direction
  }
  if (speed > 400)  // Max PWM dutycycle
    speed = 400;
  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  OCR1B = speed;
  #else
  analogWrite(_M2PWM,speed * 51 / 80); // default to using analogWrite, mapping 400 to 255
  #endif
  if (reverse)
    digitalWrite(_M2DIR,HIGH);
  else
    digitalWrite(_M2DIR,LOW);
}



void DualMC33926MotorShield::setM3Speed(int speed)
{
  unsigned char reverse = 0;
  
  if (speed < 0)
  {
    speed = -speed;  // Make speed a positive quantity
    reverse = 1;  // Preserve the direction
  }
  if (speed > 400)  // Max PWM dutycycle
    speed = 400;
  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  OCR1B = speed;
  #else
  analogWrite(_M1PWM2,speed * 51 / 80); // default to using analogWrite, mapping 400 to 255
  #endif
  if (reverse)
    digitalWrite(_M1DIR2,HIGH);
  else
    digitalWrite(_M1DIR2,LOW);
}


void DualMC33926MotorShield::setM4Speed(int speed)
{
  unsigned char reverse = 0;
  
  if (speed < 0)
  {
    speed = -speed;  // Make speed a positive quantity
    reverse = 1;  // Preserve the direction
  }
  if (speed > 400)  // Max PWM dutycycle
    speed = 400;
  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  OCR1B = speed;
  #else
  analogWrite(_M2PWM2,speed * 51 / 80); // default to using analogWrite, mapping 400 to 255
  #endif
  if (reverse)
    digitalWrite(_M2DIR2,HIGH);
  else
    digitalWrite(_M2DIR2,LOW);
}



void DualMC33926MotorShield::setM5Speed(int speed)
{
  unsigned char reverse = 0;
  
  if (speed < 0)
  {
    speed = -speed;  // Make speed a positive quantity
    reverse = 1;  // Preserve the direction
  }
  if (speed > 400)  // Max PWM dutycycle
    speed = 400;
  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  OCR1B = speed;
  #else
  analogWrite(_M1PWM3,speed * 51 / 80); // default to using analogWrite, mapping 400 to 255
  #endif
  if (reverse)
    digitalWrite(_M1DIR3,HIGH);
  else
    digitalWrite(_M1DIR3,LOW);
}



void DualMC33926MotorShield::setM6Speed(int speed)
{
  unsigned char reverse = 0;
  
  if (speed < 0)
  {
    speed = -speed;  // Make speed a positive quantity
    reverse = 1;  // Preserve the direction
  }
  if (speed > 400)  // Max PWM dutycycle
    speed = 400;
  #if defined(__AVR_ATmega168__)|| defined(__AVR_ATmega328P__)
  OCR1B = speed;
  #else
  analogWrite(_M2PWM3,speed * 51 / 80); // default to using analogWrite, mapping 400 to 255
  #endif
  if (reverse)
    digitalWrite(_M2DIR3,HIGH);
  else
    digitalWrite(_M2DIR3,LOW);
}









// Set speed for motor 1 and 2
void DualMC33926MotorShield::setSpeeds(int m1Speed, int m2Speed,int m3Speed, int m4Speed, int m5Speed, int m6Speed)
{
  setM1Speed(m1Speed);
  setM2Speed(m2Speed);
  setM3Speed(m3Speed);
  setM4Speed(m4Speed);
  setM5Speed(m5Speed);
  setM6Speed(m6Speed);

}

// Return motor 1 current value in milliamps.
unsigned int DualMC33926MotorShield::getM1CurrentMilliamps()
{
  // 5V / 1024 ADC counts / 525 mV per A = 9 mA per count
  return analogRead(_M1FB) * 9;
}

// Return motor 2 current value in milliamps.
unsigned int DualMC33926MotorShield::getM2CurrentMilliamps()
{
  // 5V / 1024 ADC counts / 525 mV per A = 9 mA per count
  return analogRead(_M2FB) * 9;
}



// Return motor 3 current value in milliamps.
unsigned int DualMC33926MotorShield::getM3CurrentMilliamps()
{
  // 5V / 1024 ADC counts / 525 mV per A = 9 mA per count
  return analogRead(_M1FB2) * 9;
}

// Return motor 4 current value in milliamps.
unsigned int DualMC33926MotorShield::getM4CurrentMilliamps()
{
  // 5V / 1024 ADC counts / 525 mV per A = 9 mA per count
  return analogRead(_M2FB2) * 9;
}


// Return motor 5 current value in milliamps.
unsigned int DualMC33926MotorShield::getM5CurrentMilliamps()
{
  // 5V / 1024 ADC counts / 525 mV per A = 9 mA per count
  return analogRead(_M1FB3) * 9;
}

// Return motor 6 current value in milliamps.
unsigned int DualMC33926MotorShield::getM6CurrentMilliamps()
{
  // 5V / 1024 ADC counts / 525 mV per A = 9 mA per count
  return analogRead(_M2FB3) * 9;
}













// Return error status
unsigned char DualMC33926MotorShield::getFault()
{
  return !digitalRead(_nSF);
  return !digitalRead(_nSF2);
  return !digitalRead(_nSF3);
  




}
