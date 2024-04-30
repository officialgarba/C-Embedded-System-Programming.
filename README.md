# C++ -Embedded-System-Programming Using Arduino For proximity(distance)

This code is structured to work within the standard Arduino framework. 
The setup() function is called once when the Arduino is powered on or reset,
and it is used to initialize variables, pin modes, and start serial communication. 
The loop() function is then repeatedly executed, where the main program logic resides.

Within the loop() function, we send a pulse to the ultrasonic sensor, 
measure the duration of the echo pulse, calculate the distance based on the measured duration,
print the distance to the serial monitor, and then wait for a short delay before taking the next measurement.





