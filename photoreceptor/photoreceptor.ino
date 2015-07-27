/* GLOBALS */
    const int DARK_LED = 2; // LED to signal darkness
    const int LIGHT_LED = 4; // LED to signal brightness
    const int THRESHOLD = 900; // Threshold to check against
/* GLOBALS */

/* void setup
 * return: none
 * parameters: none
 * purpose: first function ran when arduino starts, configuration is done here
 */
void setup()
{
    Serial.begin(9600); // start a serial connection
} // setup

/* void loop
 * return: none
 * parameters: none
 * purpose: loop that runs infinitely in arduino.
 * whatever needs to be done repeatedly must be done here
 */
void loop()
{
    // read a value from photosensor
    // using ping ANALOG 0 (A0)
    int sensorValue = analogRead(A0);
    // print the value to the Serial Console
    Serial.println(sensorValue);
    // wait 20 milliseconds
    LED_Control(sensorValue);
    delay(20);
} // loop

/* void LED_Control
 * return: none
 * parameters: value of the photosensor
 * purpose: light either the darkness or brightness indicators
 */
void LED_Control(int __value)
{
    // if bright
    if (THRESHOLD >= __value) {
        digitalWrite(DARK_LED, LOW); // turn off DARK LED
        digitalWrite(LIGHT_LED, HIGH); // turn on LIGHT LED
    } // if
    // it's dark
    else {
        digitalWrite(DARK_LED, HIGH); // turn on DARK LED
        digitalWrite(LIGHT_LED, LOW); // turn off LIGHT LED
    } // else
} // LED_Control
