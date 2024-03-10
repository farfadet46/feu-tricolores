/*
  feux tricolores

  Allumer et eteindre des led selon un ordre établis.

  Le 25 fev 2024
  par deviers.fabien -at- gmail.com

*/

  // on déclare les pin des LEDs
  #define led1_R  0
  #define led1_O  4
  #define led1_V  5

  #define led2_R  13
  #define led2_O  12
  #define led2_V  14


void setup(){
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1_R, OUTPUT);
  pinMode(led1_V, OUTPUT);
  pinMode(led1_O, OUTPUT);

  pinMode(led2_R, OUTPUT);
  pinMode(led2_V, OUTPUT);
  pinMode(led2_O, OUTPUT);

  //premier allumage du circuit, on étein tout si jamais...
  eteindre();
  
}

void loop() {
/*
  feu 1 vert
  feu 2 rouge
  5 sec
  feu 1 orange
  3 sec
  feu 1 rouge
  feu 2 vert
  5 sec
  feu 2 orange

*/
// feu 1 vert
// feu 2 rouge
  digitalWrite(led1_R,LOW);
  digitalWrite(led2_O,LOW);
  digitalWrite(led1_V,HIGH);
  digitalWrite(led2_R,HIGH);
  delay(1000);//delais de 5 sec

//feu 1 orange
//feu 2 rouge
  digitalWrite(led1_V,LOW);
  digitalWrite(led1_O,HIGH);
  delay(1000);

//feu 1 rouge
//feu 2 vert
  digitalWrite(led1_O,LOW);
  digitalWrite(led1_R,HIGH);
  digitalWrite(led2_R,LOW);
  digitalWrite(led2_V,HIGH);
  delay(1000);

//feu 2 orange
  digitalWrite(led2_V,LOW);
  digitalWrite(led2_O,HIGH);
  delay(1000);


}

void eteindre(){
   digitalWrite(led1_V,HIGH);
  digitalWrite(led1_O,HIGH);
  digitalWrite(led1_R,HIGH);
// eteindre les led du feu n°2
  digitalWrite(led2_V,HIGH);
  digitalWrite(led2_O,HIGH);
  digitalWrite(led2_R,HIGH);
  delay(200);
// eteindre les led du feu n°1
  digitalWrite(led1_V,LOW);
  digitalWrite(led1_O,LOW);
  digitalWrite(led1_R,LOW);
// eteindre les led du feu n°2
  digitalWrite(led2_V,LOW);
  digitalWrite(led2_O,LOW);
  digitalWrite(led2_R,LOW);
  delay(200);
}
