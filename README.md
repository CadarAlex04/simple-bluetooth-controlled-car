# simple-bluetooth-controlled-car
   This project is a simple Bluetooth-controlled car built using an Arduino board, L298N motor driver, and Bluetooth module (HC-10 or HC-06). The car is based on a fiberglass chassis and is powered by a battery pack of six AAA batteries. It can move forward, backward, left and right using commands sent from the smartphone via Bluetooth connection.

  The chassis I received was a basic fiberglass platform. I mounted two small DC gear motors on it - the usual yellow motors used in beginner robotics kits. These motors are controlled through the L298N dual H-bridge module, which handles direction and power for both wheels. The Bluetooth module (either HC-10 or HC-06, I'm not entirely sure which one I used) allows the Arduino to receive commands from the mobile app.

  The Arduino board runs a small program that interprets Bluetooth commands and controls the motors accordingly. If you're using the HC-06 module, the setup works perfectly with the Dabble app from the Play Store, which provides an on-screen gamepad for remote control. The HC-10 module also works if paired with a normal Bluetooth terminal app that can send characters for direction commands.

  Power is supplied via a simple battery rack containing six AAA batteries, providing approximately 9V. This is enough to power both the Arduino and the motor driver. All components share a common ground connection to ensure stable operation.

  To get it working, you just need to upload the provided Arduino code (btcar.ino) using the Arduino IDE. The code includes the Dabble library for Bluetooth control, so be sure to install that library beforehand from the Arduino Library Manager. Once uploaded, pair your phone with the Bluetooth module, open the app and start driving.
