int kled=2; //2 numarali pine bagladik
int yled=3; //3 numarali pine bagladik

int tnems=A0; //analog 0
int tnemd;  //toprak nem degeri adlı degiskenimi ayarladım

void setup() {

 pinMode(kled,OUTPUT); //cıkıs pini
 pinMode(yled,OUTPUT); //cıkıs pini

 pinMode(tnems,INPUT); //deger alıcak,O yuzden input cektik
 Serial.begin(9600); //Seri haberlesmeyi baslattık

}
void loop() {

 Serial.print("NEM degeri:"); //seri port icin yazı yazdık
 tnemd=analogRead(tnems); //sensörün deger okuması
 Serial.println(tnems); //toprak nem sensorunun degerini ekrana yazdırdık
 delay(500);  //0.5 mili saniye bekle dedik
  
 if(tnemd>10){

  digitalWrite(kled,HIGH); //kirmizi ledi yak
    delay(500);
      digitalWrite(kled,LOW); //kirmizi ledi sondur
       Serial.println("ZEMİN ISLAK"); 
       Serial.println("-----------------"); 
  }else{
    
  digitalWrite(kled,LOW);  //kirmizi ledi sondur
   digitalWrite(yled,HIGH); //yesil ledi yak
    delay(500);   
     digitalWrite(yled,LOW); //yesil ledi sondur
      Serial.println("ZEMİN KURU"); 
      Serial.println("-----------------"); 
    }
} //Bugun 06.09.2021 OKULLAR BASLIYOR UMARIM HAYIRLI OLUR SAYGI VE SEVGILERIMLE F C Y B E R
