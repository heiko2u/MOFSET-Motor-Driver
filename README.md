# Pololu Dual MC33926 Motor Driver for Arduino 

Control 6 motors with Three Dual MC33926 MotorShields for Pololu Dual MC33926 Motor Driver Shield for Arduino

I have used this program to control 6 motors. A single sheild controls 2 motors however if you want to use multiple sheilds, it is not possible to create motor 3 and motor 4. You have to change a few parameters in both .h and .cpp files and create an object for each sheild.  

You can change the pin mapping to any digital pins you like.. I assigned them in such a way so I can troubleshoot the wires easily. In the Arduino code, import the library and use  md.setM1Speed() to  md.setM6Speed().

I used  an Arduino Due this project to power motors  running high current . The current sense pin needs a zener diode to control the voltage going inside the board .


Have fun!
