//candle pins are stored in the way they are setup in the room
int candles[] = {12, 13, 10, 11};
//Combination for lock
int comb[] = {7, 9, 8, 6};

//canndle clusters by pin:
//4 is 12
//3 is 11
//2 is 13
//1 is 10

void setup() {
  //initalize all LEDs
  for (int x = 0; x < 4; x++) {
    pinMode(candles[x], OUTPUT);
  }
}

void loop() {
  //Loop through each candle one by one
  for (int i = 0; i < 4; i++) {
    //Blink the candle the number of times for the digit needed
    for (int x = 0; x < comb[i]; x++) {
      digitalWrite(candles[i], HIGH)
      delay(1000)
      digitalWrite(candles[i], LOW)
      delay(1000)
    }
  }

  //reset puzzle by no candles being on for 5 seconds
  delay(5000);
}
