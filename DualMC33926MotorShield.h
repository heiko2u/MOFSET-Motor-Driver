#ifndef DualMC33926MotorShield_h
#define DualMC33926MotorShield_h

#include <Arduino.h>

class DualMC33926MotorShield
{
  public:  
    // CONSTRUCTORS
    	DualMC33926MotorShield(); 

	DualMC33926MotorShield(unsigned char M1DIR,  unsigned char M1FB, unsigned char M2DIR,  unsigned char M2FB,unsigned char nD2, unsigned char nSF,unsigned char 				M1DIR2,unsigned char  M1FB2,unsigned char M2DIR2,unsigned char M2FB2,unsigned char nD22,unsigned char nSF2,unsigned char M1DIR3,unsigned char 				M1FB3,unsigned char M2DIR3,unsigned char M2FB3,unsigned char nD23,unsigned char nSF3); // ALL TOGATHER without pwm

    	DualMC33926MotorShield(unsigned char M1DIR,  unsigned char M1FB, unsigned char M2DIR,  unsigned char M2FB,unsigned char nD2, unsigned char nSF,unsigned char 				M1DIR2,unsigned char  M1FB2,unsigned char M2DIR2,unsigned char M2FB2,unsigned char nD22,unsigned char nSF2,unsigned char M1DIR3,unsigned char 				M1FB3,unsigned char M2DIR3,unsigned char M2FB3,unsigned char nD23,unsigned char nSF3, unsigned char M1PWM, unsigned char M2PWM,unsigned char 				M1PWM2,unsigned char M2PWM2,unsigned char M1PWM3,unsigned char M2PWM3); // All togather with PWM
    

	DualMC33926MotorShield(unsigned char M1DIR2,unsigned char  M1FB2,unsigned char M1PWM2,unsigned char M2DIR2,unsigned char M2FB2,unsigned char M2PWM2,unsigned char 				nD22,unsigned char nSF,unsigned char M1DIR3,unsigned char M1FB3,unsigned char M1PWM3,unsigned char M2DIR3,unsigned char M2FB3,unsigned char 				M2PWM3,unsigned char nD23,unsigned char nSF3);//new two boards





    // PUBLIC METHODS
    void init(); // Initialize TIMER 1, set the PWM to 20kHZ. 
    void setM1Speed(int speed); // Set speed for M1.
    void setM2Speed(int speed); // Set speed for M2.
    void setM3Speed(int speed);
    void setM4Speed(int speed);
    void setM5Speed(int speed);
    void setM6Speed(int speed);

    void setSpeeds(int m1Speed, int m2Speed,int M3Speed,int M4Speed,int M5Speed, int M6Speed); // Set speed for both M1 and M2.

    unsigned int getM1CurrentMilliamps(); // Get current reading for M1. 
    unsigned int getM2CurrentMilliamps(); // Get current reading for M2.
    unsigned int getM3CurrentMilliamps();
    unsigned int getM4CurrentMilliamps();
    unsigned int getM5CurrentMilliamps();
    unsigned int getM6CurrentMilliamps();



    unsigned char getFault(); // Get fault reading.
    
  private:

    unsigned char _nD2;
    unsigned char _M1DIR;
    unsigned char _M2DIR;
    unsigned char _M1PWM;
    unsigned char _M2PWM;
    unsigned char _nSF;
    unsigned char _M1FB;
    unsigned char _M2FB;

    unsigned char _nD22;
    unsigned char _M1DIR2;
    unsigned char _M2DIR2;
    unsigned char _M1PWM2;
    unsigned char _M2PWM2;
    unsigned char _nSF2;
    unsigned char _M1FB2;
    unsigned char _M2FB2;

    unsigned char _nD23;
    unsigned char _M1DIR3;
    unsigned char _M2DIR3;
    unsigned char _M1PWM3;
    unsigned char _M2PWM3;
    unsigned char _nSF3;
    unsigned char _M1FB3;
    unsigned char _M2FB3;









};

#endif
