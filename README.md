# arduino-lcdgame

Objective:
To create a low cost, simple, and fun game using a 16x2 LCD screen via Arduino and I2C communication. This game will have a similar design approach to the infamous “Running Man” game most people create on Arduino. Heartbreaker’s objective will be to obtain as high a score as possible without dying. In the game, you’ll have to maneuver up and down while also shooting the oncoming hearts. Each heart that you shoot nets you 1 point. The controls are straightforward and easy to use: use the left push button to move up, the right push button to move down, and the far-right push button to shoot. And if you happen to get hit by a heart you can simply push any of the three buttons to start again to try and beat your old score.

WARNING:
BEFORE ANY DEBUGGING OR ANY ACTUAL CODING CAN BEGIN, YOU MUST SET UP THE HARDWARE ACCORDINGLY AND USE THE PROVIDED SKETCH (i2caddressbusscanner.ino) TO FIND THE ADDRESS OF THE LCD DISPLAY FOR THE ARDUINO TO SUCCESSFULLY COMMUNICATE WITH IT. 

*WE WILL BE USING ARDUINO INTERNAL RESISTORS (INPUT_PULLUP)*
*DOWNLOAD LIQUID CRYSTAL I2C LIBRARY*



Icluded:
Original game file
All testing files included




Items used:
Arduino Mega 2560
16x2 I2C LCD
3 Push Buttons
Jumper Cables
2 Breadboards
