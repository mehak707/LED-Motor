#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int i,j,k,l,m,n,p;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(7,OUTPUT);
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(6,INPUT);
pinMode(10,INPUT);
pinMode(9,INPUT);
pinMode(8,INPUT);
}


void loop(){

  i=digitalRead(8);
j=digitalRead(10);
k=digitalRead(6);
l=digitalRead(9);
m=digitalRead(7);
n=digitalRead(A0);
p=digitalRead(A1);
if(i==1)
{
  lcd.clear();
  digitalWrite(7,HIGH);
 lcd.setCursor(1,0);
  lcd.print("LED ON");
  
  if(n==1 && p==0)
  {
    lcd.setCursor(1,1);
  lcd.print("CLOCKWISE");
  }
   if(n==0 && p==1)
  {
    lcd.setCursor(1,1);
  lcd.print("ANTI-CLOCKWISE");
  }}
  
  
  if(j==1)
  {lcd.clear();
  digitalWrite(7,LOW);
 lcd.setCursor(1,0);
  lcd.print("LED OFF");
  
   if(n==1 && p==0)
  {
    lcd.setCursor(1,1);
  lcd.print("CLOCKWISE");
  }
   if(n==0 && p==1)
  {
    lcd.setCursor(1,1);
  lcd.print("ANTI-CLOCKWISE");
  }}
  
  if(k==1)
  {
    lcd.clear();
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
 lcd.setCursor(1,1);
  lcd.print("CLOCKWISE");
  if(m==1)
  {//lcd.clear();
   lcd.setCursor(1,0);
  lcd.print("LED ON");}
  else
  {
    lcd.setCursor(1,0);
  lcd.print("LED OFF");
  }}
  
 if(l==1)
  {lcd.clear();
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
 lcd.setCursor(1,1);
  lcd.print("ANTI-CLOCKWISE");

    if(m==1)
  {//lcd.clear();
   lcd.setCursor(1,0);
  lcd.print("LED ON");}
  else
  {
    lcd.setCursor(1,0);
  lcd.print("LED OFF");
  }}   
  
 }
   
