const byte PIN_FOTORESISTENZA = A0;
const byte PIN_LED            = 13;
const byte SOGLIA             = 500;

void setup() {
  pinMode(PIN_FOTORESISTENZA, INPUT);
  pinMode(PIN_LED,            OUTPUT);
}

void loop() {
  int valoreSensore = analogRead(PIN_FOTORESISTENZA);

  if (valoreSensore < SOGLIA)
    // lo accendo se è buio
    digitalWrite(PIN_LED, HIGH);
  else
    // lo spengo se c'è già luce
    digitalWrite(PIN_LED, LOW);
}
