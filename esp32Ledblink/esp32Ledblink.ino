#define LED 2 // Pin 2'ye 'LED' ismini atıyoruz | Assigning the name 'LED' to pin 2
void setup() {
  pinMode(LED,OUTPUT); // LED pinini çıkış olarak ayarlıyoruz | Setting the LED pin as an output

}

void loop() {
 digitalWrite(LED,HIGH); // LED'i yak (voltaj ver) | Turn the LED on (apply voltage)
 delay(1000); // 1 saniye bekle (1000 milisaniye) | Wait for 1 second (1000 milliseconds)
 digitalWrite(LED,LOW); // LED'i söndür (voltajı kes) | Turn the LED off (cut voltage)
 delay(1000); // 1 saniye bekle (1000 milisaniye) | Wait for 1 second (1000 milliseconds)
}
