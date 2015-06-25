# Arduino-Light-Sensor

<p>Create a light sensor with Arduino</p>

<p>Please note that this is not a tutorial. It is a high level guide on how to create a light sensor with the Arduino. This code turns LEDs on and off depending on the data being collected</p>

<ul>
    <b>Necessary equipment:</b>
    <li>Breadboard</li>
    <li>Photoreceptor</li>
    <li>Two LEDs</li>
    <li>Three 560 Ohm resistors (less Ohm resistors may be used)</li>
    <li>Seven cables</li>
    <li>Four 2-pin headers</li>
</ul>

<ul>
    <b>Setting up the circuit:</b>
    <li>Add all four headers to the corners of the breadboard</li>
    <li>Connect one cable from the 5v pin, to a positive (+) column in the breadboard</li>
    <li>Connect one cable from the ground pin, to a negative (-) column in the breadboard</li>
    <li>Connect the photoreceptor to the breadboard (I used F6 and F9)</li>
    <li>Connect one cable from the positive column on the breadboard, to one of the spaces close to the photoreceptor (I used j1)</li>
    <li>Connect one resistor to bridge one end of the photoreceptor to the now positive current (I used g1 and g9)</li>
    <li>Connect one cable to the oppositve end of the photoreceptor, to the negative column in the breadboard (I used j6)</li>
    <li>Connect one cable from the A0 port in the Arduino, to the row that has the resistor and photoreceptor (i9 in my case). This will be used to read the values from the photoreceptor </li>
    <li>Connect one LED (Blue for me) to the breadboard. I used f22 and f23 for negative (short leg) and positive (long leg) respectively</li>
    <li>Connect one end of a resistor next to the negative pin of the LED (g22 for me), and the other end to the negative column of the breadboard</li>
    <li>Connect one cable next to the positive pin of the LED (g23 for me), and to the 5th (#4) digital pin in the Arduino. This cable will control the state of the LED</li>
    <li>Connect another LED to the breadboard (I used Red). Negative leg (short one) was on f25, positive (longer one) on f26</li>
    <li>Connect one end of a transistor next to the negative leg of the LED (i25), and the other to the negative column in the breadboard</li>
    <li>Connect one cable from pin 3 (#2) in Arduino, to a slot next to the positive leg of the LED (i26 used)</li>
</ul>

<b>Running the program:</b>
<p>Using the Arduino IDE, verify the code, then load it into the Arduino board</p>
