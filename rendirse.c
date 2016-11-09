/*Para esta función no es necesario incluir el tablero, solo una forma de llamarlo*/
/*En la linea de comado podemos poner que si detecta un "GIVEUP" mande a llamar esta función rendirse.c*/
#include <stdi.o>

void rendirse () /*Que sea Void, al fin y al cabo no hay que regresar nada*/
{
   printf("Gracias por jugar y suerte para la próxima");
   exit(-1); /*Aqui alguna manera d finalizar el programa, la verdad no me acuerdo creo es asi, diganme si me equivoco.*/
}
