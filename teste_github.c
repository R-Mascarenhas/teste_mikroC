void main() {

TRISB = 0xFC;
PORTB = 0x00;

while(1)
  {
   RB0_bit = ~RB0_bit;
   delay_ms(500);
  }

}