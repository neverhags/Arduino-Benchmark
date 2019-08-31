bool debug = false;
unsigned long n = 0;
unsigned long fib[2];
long bn = 0;
bool state = false;
bool showresults = true;

void setup() {
  fib[0] = 1;
  fib[1] = 1;
  Serial.begin(115200);
  Serial.println("");
}

void loop() {
  if (showresults) {
    if (millis()>=10000){
      Serial.print("Last: ");
      Serial.println(fib[1]);
      Serial.print("N: ");
      Serial.println(n);
      showresults = false;
    } else {
    if(fib[0]+fib[1]==n) {
      if (debug) {
        Serial.print("Last: ");
        Serial.println(fib[1]);
    }
      fib[0] = fib[1];
      fib[1] = n;
    } 
    n++;
    }
  }
}