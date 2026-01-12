# SimpleSmooth
An easy way to calculate a rolling average (Arduino library)

Expands on the["smooth" library by Salah Bouhoun](https://github.com/sbouhoun/smoother) which itself appears to be based on https://docs.arduino.cc/built-in-examples/analog/Smoothing/.

## Example
    SimpleSmooth<> mySmoother;
    
    int average = mySmoother.Add(analogRead(A0));
    int averageAgain = mySmoother.Average();

You can customise the number and type using the optional template parameters:

    SimpleSmooth<8, float> floatExampleSmoother;
