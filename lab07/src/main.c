/** 
* @file main.c
* @brief Файл где находится вся программа
* @author Daniil Durnev
* @date 20-jan-2020
* @version 1.0 */

#include <stddef.h>
#include <string.h>

/** Функция для лабораторной №5, задание №2 на отлично, которая определяет простое ли число
* - @param NUM - число для проверки
* - Перед самой функцией объявлена переменная ANS1 для ответа
* - 1 условие: если число меньше или равно два то оно не подходит
* - Цикл с условием для определения простоты числа
* @return ANS1 - ответ: если ответ 1 то простое, иначе нет */

int isPrime(int NUM ){
int ANS1;
if (NUM<=2) ANS1= 2;
for (int i=2; i<NUM; i++){
if( NUM % i == 0) ANS1= 0;
else ANS1= 1 ;
break ;}
return ANS1;
}

/** Функция для лабораторной №6, задание №7 на удовлетворительно, которая считает количество гласных
* - Объявлен массив @param TEXT[] - слово/строка для подсчёта гласных
* - Объявлены переменные c для условия и ANS2 для ответа
* - Цикл который проходит по слову/строке с условием на проверку гласных
* @return ANS2 - ответ, количество гласных */

char count_vowels( char TEXT[] ){
char c;
int ANS2 = 0;
for (int q= 0; q < strlen(TEXT); q++) {
c= TEXT[q];
if (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'y' ||
     c == 'A' || c == 'E' || c =='I' || c == 'O' || c == 'U' || c == 'Y')
ANS2++ ;}
return ANS2;
}

/** Главная функция 
*
* Последовательность действий для задания №2
* - задана функцию srand чтобы получить случайное число для проверки
* - заданы числа @param NUM1 и @param NUM2 для получения результата
* - объявлены переменные ANS1_1, ANS2_1, ANSR для ответа: если ответ 1 то простое, иначе нет
* - получем ответы с помощью функции {@link isPrime}
*
* Последовательность действий для задания №7
* - объявлены массивы TEXT1[], TEXT2[] для слов, в которых мы будем считать гласные
* - объявлены переменные ANS1_2, ANS2_2 для ответа
* - получаем ответы с помощью функции {@link count_vowels}
*
* @return 0 - успешный код возвращения с программы */
 
int main(){

// Задание №2
srand (time(NULL));
const int NUM1= 6;
const int NUM2= 7;
int ANS1_1, ANS2_1, ANSR;
ANS1_1= isPrime( NUM1 );
ANS2_1= isPrime( NUM2 );
ANSR= isPrime( rand()%10000 );

// Задание №7
char TEXT1[] = "Programming";
char TEXT2[]= "Human";
int ANS1_2, ANS2_2;
ANS1_2= count_vowels( TEXT1 );
ANS2_2= count_vowels( TEXT2 );

return 0;
}

