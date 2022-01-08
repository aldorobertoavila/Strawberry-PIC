void main() {
  TRISB = 0x00;  //PORTB
  while(1){
    PORTB = 0xFF;
    delay_ms(1000);
    PORTB = 0x00;
    delay_ms(1000);
  }
}