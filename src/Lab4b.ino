SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
    pinMode(D7, INPUT);
    pinMode(D5, OUTPUT);
}

void loop()
{
    int buttonState = digitalRead(D7);

    if (buttonState == true)
    {
        digitalWrite(D5, HIGH);
    }
    else
    {
        digitalWrite(D5, LOW);
    }
}