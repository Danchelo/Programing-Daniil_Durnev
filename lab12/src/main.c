/** 
* @file main.c
* @brief Файл где находится вся программа
* @author Daniil Durnev
* @date 16-feb-2020
* @version 1.0 */

#include <stdlib.h>
#include <stdio.h>
/** Главная функция
*
* Последовательность действий:
* 1. Создан массив который заполняется с клавиатуры, объявлены константа и переменные
* 2. Найдены максимальное MAX и минимальное MIN значения, подсчитана сумма SUM чисел между ними
* 3. Отсортирован первый массив MAS для второго массива MAS2 
* 4. Создан массив MAS2 который заполнен числами между MAX и MIN значениями
*
* @return 0 - успешный код возвращения с программы */
 

int main() {
const int N = 5;
int i, q, w, *MAS, NUM;
int SUM = 0;
MAS = malloc( N * sizeof(int));
int MIN = 1000000;
int MAX = 0;
printf ("Введите числа: \n");
for ( i = 0; i < N; i++) { 
scanf ("%d", &MAS[i]);
NUM = MAS[i];
SUM += NUM;
if (MIN > MAS[i]) MIN = MAS[i];
if (MAX < MAS[i]) MAX = MAS[i];
}
if (MAS[i] = MIN) SUM -= MIN;
if (MAS[i] = MAX) SUM -= MAX;
printf ("Максимальное значение: %d \n", MAX);
printf ("Минимальное значение: %d \n", MIN);
printf ("Сумма чисел между ними: %d \n", SUM);

for (q = 0; q < N - 1; q++) {
for (w= 0; w < N - q - 1; w++) {
if (MAS[w] > MAS[w + 1]) {
int A = MAS[w];
MAS[w] = MAS[w + 1];
MAS[w +1] = A;
}}}

printf ("Значения между максимальным и минимальным: \n");
int *MAS2;
int N2 = N - 2;
MAS2 = malloc ( N2 * sizeof(int));
for (int r = 0; r < N2; r++) {
for (int e = 1; e < N - 1; e++) {
MAS2[r] = MAS[e];
}}
int r;
for (int e = 1; e < N - 1; e++) {
    MAS2[r] = MAS[e];
printf ("%d \n", MAS2[r]);
}
free (MAS);
free (MAS2);
return 0;
}

