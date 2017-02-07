char val;
const int buttonPin = 2;  
int buttonState;            
int lastButtonState = LOW;  
int count=0;
unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;  
const int buttonPin1 = 5;  
int buttonState1;            
int lastButtonState1 = HIGH;  
int count1=0;
unsigned long lastDebounceTime1= 0;  
unsigned long debounceDelay1 = 50;  
int reading1;

void setup() {
 Serial.begin(9600);
 pinMode(buttonPin, INPUT);
 pinMode(buttonPin1, INPUT);
}

void loop() {
//   if(Serial.available());
//   val=Serial.read();
//   Serial.println(val);
 int reading = digitalRead(buttonPin);
 if (reading != lastButtonState) {
   
   lastDebounceTime = millis();
  }

 if ((millis() - lastDebounceTime) > debounceDelay) {
 
   if (reading != buttonState) {
     buttonState = reading;
     if (buttonState == HIGH) {
       count++;
   Serial.println(count);
  if(count == 1){
   line2();
   line2();
  }
   if(count == 2){
    line();
       line2();
       line();
       line1();
       line();
  }
  if(count == 3){
    line();
      line2();
      line();
      line2();
      line();
  }
   if(count ==4){
line3();
      line();
      line2();
  }
  if(count == 5){
   line();
      line1();
      line();
      line2();
      line();
  }
   if(count == 6){
line();
      line1();
      line();
      line3();
      line();
  }
  if(count == 7){
      line();
      line2();
      line2();
   
  }
   if(count == 8){
   line();
      line3();
      line();
      line3();
      line();
  }
  if(count == 9){
      line();
      line3();
      line();
      line2();
      line();
  }
   if(count == 0){
       line();
       line3();
       line3();
       line();
  }
   }
   }lastButtonState = reading;

 } lastButtonState = reading;
   reading1 = digitalRead(buttonPin1);
 if (reading1 != lastButtonState1) {
   
   lastDebounceTime1 = millis();
  }

 if ((millis() - lastDebounceTime1) > debounceDelay1) {
 
   if (reading1 != buttonState1) {
     buttonState1 = reading1;
     if (buttonState1 == HIGH) {
       count--;
   Serial.println(count);
    if(count == 1){
   line2();
   line2();
  }
   if(count == 2){
    line();
       line2();
       line();
       line1();
       line();
  }
  if(count == 3){
    line();
      line2();
      line();
      line2();
      line();
  }
   if(count ==4){
line3();
      line();
      line2();
  }
  if(count == 5){
   line();
      line1();
      line();
      line2();
      line();
  }
   if(count == 6){
line();
      line1();
      line();
      line3();
      line();
  }
  if(count == 7){
line();
      line2();
       line2();
  }
   if(count == 8){
   line();
      line3();
      line();
      line3();
      line();
  }
  if(count == 9){
      line();
      line3();
      line();
      line2();
      line();
  }
   if(count == 0){
       line();
       line3();
       line3();
       line();
  }
 
   }
   }
 } lastButtonState1 = reading1;


}
 void line(){
  Serial.println("               (--------)");
  Serial.println("             (------------)");
  Serial.println("               (--------)");
  }
void line1(){
  Serial.println("          (-)");
  Serial.println("         (---)");
  Serial.println("         (---)");
  Serial.println("         (---)");
  Serial.println("          (-)");
  }
 void line2(){
  Serial.println("                         (-)");
  Serial.println("                        (---)");
  Serial.println("                        (---)");
  Serial.println("                        (---)");
  Serial.println("                         (-)");
  }
   void line3(){ 
  Serial.println("          (-)             (-)");
  Serial.println("         (---)           (---)");
  Serial.println("         (---)           (---)");
  Serial.println("         (---)           (---)");
  Serial.println("          (-)             (-)");
  }
