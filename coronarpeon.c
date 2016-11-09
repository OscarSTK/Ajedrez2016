char /*Opino que en vez de "void" sea char como lo he puesto y que regrese la opción seleccionada, esto con el fin de que sea mas fácil manipular
      la selección del jugador */ /*Oscar David*/
coronar_peon (char tablero[8][8])
{
  char Opcion;
  
  if(/*Aquí se pondrá una condición para cuando algún peón llegué al lado del adversario y decida coronarse */
     /*La condición tendria que ser el final del tablero, solo hay que ver cual es el tablero que estan ocupando*/
    
  printf("Elija que pieza quiere tomar. \n T=Torre \n D=Dama \n A=Alfil \n C=Caballo \n");
  scanf("%c",&Opcion); 
  /*Después se mandará a llamar la función de la pieza que fue seleccionada*/      
  return Opcion; /*Es mejor regresar la opción del jugador*/ /*Oscar David*/
}
