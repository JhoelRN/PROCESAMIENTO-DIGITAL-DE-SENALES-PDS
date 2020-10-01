#include <18F4550.h> 
#device adc=10 // conversion analogico digital de 10 bits. Por defecto 8bits
#fuses HS,NOWDT,NOMCLR
#use delay(crystal=12MHz) //cristal
#use rs232 (baud=9600, xmit=PIN_C6, rcv=PIN_C7) 
// rs232(velocidad en baudios, Tx, Rx)
#include <math.h>  

void main() {
   int16 a;   // Variable almacena los bits
   float b;  // almacena valores          
   setup_adc_ports(AN0_TO_AN6); // Entradas analogicas, difitales o combinacion
   setup_adc(adc_clock_internal); //selecciono reloj interno para conversion (TIPO DE RELOJ)
   set_adc_channel(6); //lectura en canal 6 para la conversión analógica
   delay_us(10); // retardo
   do {
      a = Read_ADC( ); // Se guarda el dato de la señal analógica
      b = 5.0 * a / 1024.0; // Conversion de bits a valores 
      printf("%4Lu  ",a);
      printf("%04.2f\r",b); // Mostrar en pantalla b
   } while (TRUE);
}





