int RELAY1    = D0;   // Digital Out 0 is connected to the first relay
int LONG_BUZZ = 6000; // milliseconds

void setup() {
    // initialize the control pin as output
    pinMode(RELAY1, OUTPUT);
    
    // start the relay in an OFF state
    digitalWrite(RELAY1, LOW);
    
    // register the buzzer function
    Spark.function("buzz", buzz);
}

void loop() {
    // nothing here for now
}

int buzz(String command) {

    // simulate the button press
    digitalWrite(RELAY1, HIGH);

    // hold it down for a few seconds
    delay(LONG_BUZZ);

    // and let it go
    digitalWrite(RELAY1, LOW);

    return 1;
}
