#include <stdio.h>

//Definiendo colores a utilizar
#define Azul    "\x1b[34m"
#define RESET   "\x1b[0m"
int
azul (void)
{
  char tablero[9][9];
  int i = 0;
  int j = 0;
  int e = 0;
  for (i = 0; i <= 9; i = i + 1)
    {
      tablero[i][j] = '*';
      printf (" ");
      printf (Azul "%c" RESET, tablero[i][j]);
    }
/*-----------------------------------*/
  printf ("\n");

  i = 0;
  while (j < 8)
    {
      printf (" ");
      tablero[9][j] = '*';
      printf (Azul "%c" RESET, tablero[9][j]);
/*Aqui le puedes quitar el while y poner la letras de las piezas :D*/
      while (e < 17)
	{
	  printf (" ");
	  e = e + 1;
	}
      e = 0;
/*-----------------------------------------------------------------*/
      tablero[i][j] = '*';
      printf (Azul "%c \n" RESET, tablero[i][j]);
      j = j + 1;
    }
/*-----------------------------------*/
  i = 0;
  for (i = 0; i <= 9; i = i + 1)
    {
      tablero[i][8] = '*';
      printf (" ");
      printf (Azul "%c" RESET, tablero[i][8]);
    }
/*-----------------------------------*/
  printf ("\n");
}