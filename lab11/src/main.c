/** 
* @file main.c
* @brief Файл где находится вся программа
* @author Daniil Durnev
* @date 06-feb-2020
* @version 1.0 */

#include <stdlib.h>
#include <stddef.h>
#include <time.h>
/** Главная функция
*
* Последовательность действий:
* 1. Написана функция для генерации рандомных чисел, объявлены константа и переменные
* 2. Массив заполнен рандомными числами, найдены максимальное MAX и минимальное MIN значения, подсчитана сумма SUM чисел между ними
* 3. Отсортирован первый массив MAS для второго массива MAS2 
* 4. Создан массив MAS2 который заполнен числами между MAX и MIN значениями
*
* @return 0 - успешный код возвращения с программы */
 

int main() {
srand (time (NULL));
const int N = 10;
int i, q, w, A, *MAS, NUM;
int SUM = 0;

MAS = malloc( N * sizeof(int));
int MIN = MAS[0];
int MAX = MAS[0];
for ( i = 0; i < N; i++) { 
MAS[i] = rand ()%100;
NUM = MAS[i];
SUM += NUM;
if (MIN > MAS[i]) MIN = MAS[i];
if (MAX < MAS[i]) MAX = MAS[i];
}
if (MAS[i] = MIN) SUM -= MIN;
if (MAS[i] = MAX) SUM-= MAX;

for (q = 0; q < N - 1; q++) {
for (w= 0; w < N - q - 2; w++) {
if (MAS[w] > MAS[w + 1]) {
A = MAS[w];
MAS[w] = MAS[w + 1];
MAS[w +1] = A;
}}}

int *MAS2, e, r;
int N2 = N - 2;
MAS2 = malloc ( N2 * sizeof(int));
for ( r = 0; r < N2; r++) {
for (e = 1; e < N - 1; e++) {
MAS2[r] = MAS[e];
}}
return 0;
}

