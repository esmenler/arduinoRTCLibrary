#include <LiquidCrystal.h>
#include <virtuabotixRTC.h> 
int CLK_PIN = 6 ;
int DAT_PIN = 7 ;
int RST_PIN = 8 ;

virtuabotixRTC saat(CLK_PIN, DAT_PIN, RST_PIN);//  virtuabotixRTC'does not name //
int rs = 12 , en = 11 , d4 = 5 ,d5 = 4 ,d6 = 3 , d7 = 2 ;
LiquidCrystal lcd (rs ,en, d4 , d5 , d6 , d7 );

void setup() {
 lcd.begin (16 , 2);a type

}

void loop() {
  // put your main code here, to run repeatedly:

}
saat updateTime ();//doesnot a type//

lcd. clear ();
lcd. setCursor (0 , 0);
lcd.print (saat. dayofmonth);
lcd.print ( " / " );
lcd.print  (saat. year);
lcd.print (( " / " );
lcd.setCursor ( 0 , 1);
lcd.print ( saat. hour);
lcd.print ( ": " );
lcd.print (saat.minute);
lcd.print ( " : " );
lcd.print (saat.second);
delay ( 1000 ):
