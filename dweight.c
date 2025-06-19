#include <stdio.h>

int
main (void)
{
  int height, length, width, volume, weight;


  printf ("Введите высоту коробки: ");
  scanf ("%d", &height);

  printf ("Введите длину коробки: ");
  scanf ("%d", &length);

  printf ("Введите ширину коробки: ");
  scanf ("%d", &width);




  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Габаритный размер: %dx%dx%d\n", height, length, width);
  printf("Объём: %d\n", volume);
  printf("Размерный вес: %d\n", (volume + 165) / 166);
  return 0;
}



/*


Задача из книги C Programming: A Modern Approach" (2nd Edition) by K.N. King
Цель: написать программу которая считает габаритного вес коробки



*/