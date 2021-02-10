/** 
* @file main.c
* @brief Файл где находится вся программа
* @author Daniil Durnev
* @date 08-feb-2020
* @version 1.0 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/** Главная функция
*
* Последовательность действий:
* 1. Объявлены константа и переменные
* 2. Созданы массивы TEXT1, TEXT2 и SYM
* 3. С помощью функции gets заполнен массив
* @param TEXT1 - текст который пользователь вводит
* 4. Создан цикл который считает количество слов с одинаковыми буквами в начале и конце слова
*
* @return 0 - успешный код возвращения с программы */

int main() {
const int N = 100;
int ANS = 0;
char *TEXT1, *TEXT2;
TEXT1 = malloc ( N * sizeof(char));
TEXT2 = malloc ( N * sizeof(char));
char SYM[2] = { ',' , ' ' };
printf ("Введите текст: \n");
gets (TEXT1);
for (int i= 0; i< strlen(TEXT1); i++) {
TEXT1[i];
for (TEXT2 = strtok ( TEXT1, SYM); TEXT2 != NULL; TEXT2 = strtok (NULL, SYM)) {
int LAST = strlen(TEXT2) - 1;
if (TEXT2 == (TEXT2 + LAST - 1)) ANS++ ;
}}
return 0;
}
