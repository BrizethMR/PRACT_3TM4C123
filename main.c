#include "lib/include.h"

int main(void)
{
    //uint16_t valor = 0;

    
    char c='5';
    int Largo=100;//VARIABLE DONDE ALMACENARÉ EL LARGO DE MI ARREGLO
    char Nombre[Largo]; //ARREGLO DONDE ALMACENARÉ EL NOMBRE



    Configurar_PLL(_25MHZ);  //Confiuracion de velocidad de reloj
    Configurar_UART1();//Yo FCLK 20MHZ Baudrate 9600


    //Experimento 1

    /*Experimento 1
      Configurar_UART1(); //Jorge,Alberto,Navarro,Saul,Fabela -fclk 25MHZ Baud-rate 57600
      Configurar_UART7(); //Angel,Fernanda,Sonia,Aleidis,Monse -fclk 50MHZ Baud-rate 57600
      Configurar_UART4(); //Argelia,Roxana,Yesica,Vanesa,Christian,Abiu -fclk 10MHZ Baud-rate 4800
      Configurar_UART2(); //Brizet,Monse,Luis,Majo,Alonso -fclk 40MHZ Baud-rate 115200 - EL UART2 SE ENCUENTRA RESERVADO
      Configurar_UART3(); //Jesus,Yesica,Carlos,Dulce,Rodolfo,Leonardo -fclk 80MHZ Baud-rate 19200
      Configurar_UART2(); //Andrea,Avila,Pamela,Paulina -fclk 50MHZ Baud-rate 57600
      Configurar_UART5(); //Hector,Cecilia,Carolina,Jozzafat -fclk 40MHZ Baud-rate 28800
    */
   
    Configurar_GPIO();
   // Homogeneidad();
    //printString("Holis Bolis");
    //printChar(c);
    //printChar(b);
    //printString("HOLA\n");
   // char *arr = readString(',');
   // printString(&arr[0]);
    while(1)
    {
         c = readChar();
         switch(c)
         {
           //SE LLAMA A LA FUNCIÓN 
           case 'a':
                 GPIOF->DATA = (1<<1) | (1<<2) | (1<<3);//PRENDEMOS TODOS LOS LED'S(OPCIONAL, LO PODEMOS ELIMINAR)
                 Largo=readString(',',&Nombre[0]);//FUNCION QUE CALCULA LARGO DEL ARREGLO
                 NomInvert(&Nombre[0],Largo);//FUNCION QUE INVIERTE Y AÑADE LOS NUMEROS
                 printString(&Nombre[0], Largo);//FUNCION QUE IMPRIME 
                 break;
           
         }
    }

}
