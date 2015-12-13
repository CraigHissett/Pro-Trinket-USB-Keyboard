/*Code to follow
Code will be based upon current version, but will include a few functions:

i2cRead()
polls the i2c line and creates an array of i2c addresses of attached slaves
To be ran during setup()

i2cPoll()
just like the button polling uses a 'For' to step through buttons, this will step through the array created by i2cRead().

buttonPoll()
The current button polling code

encoderPoll()
The current encoder polling code

The main loop will then be a case of running the three Poll functions, initiating the execute code if something found

*/
