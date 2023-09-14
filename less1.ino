// SOS BLINKY
int Red = 10;
int Blue = 9;
int Green = 8;
int fast = 100;
int slow = 500;
int slowest = 1000;
void Blink(int times, int colour, int freq);

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop() {
  Blink(5,Red, fast);
  Blink(4,Blue, slow);
  Blink(3,Green, slowest);
}

void Blink(int times, int colour, int freq){
  for(int n =0 ; n < times; n++  ){
    digitalWrite(colour, HIGH);
    delay(freq);
    digitalWrite(colour, LOW);
    delay(freq);
    }
  }
