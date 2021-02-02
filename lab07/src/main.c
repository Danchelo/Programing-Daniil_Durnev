#include <stddef.h>
#include <string.h>

//Функция для лабораторной №5, задание №2 на отлично
int ANS1, NUM;
int isPrime( NUM ){
//Решение
if (NUM<=2) ANS1= 1;
for (int i=2; i<NUM; i++){
if( NUM % i == 0) ANS1= 0;
else ANS1= 1 ;
break ;}
return ANS1;
}

//Функция для лабораторной №6, задание №7 на удовлетворительно
char TEXT[];
char count_vowels( char TEXT[] ){
//Вспомогательные переменные
char c;
int ANS2 = 0;
//Решение
for (int q= 0; q < strlen(TEXT); q++) {
c= TEXT[q];
if (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'y' ||
     c == 'A' || c == 'E' || c =='I' || c == 'O' || c == 'U' || c == 'Y')
ANS2++ ;}
return ANS2;
}

int main(){
//Лабораторная №5, задание №2 на отлично
//Переменные и константы
srand (time(NULL));
const int NUM1= 6;
const int NUM2= 7;
int ANS1_1, ANS2_1, ANSR;
//Ответ: если 1 то число простое, если 0 то нет
ANS1_1= isPrime( NUM1 );
ANS2_1= isPrime( NUM2 );
ANSR= isPrime( rand()%10000 );

//Лабораторная №6, задание №7 на удовлетворительно
//Масивы и переменные
char TEXT1[] = "Programming";
char TEXT2[]= "Human";
int ANS1_2, ANS2_2;
//Ответы
ANS1_2= count_vowels( TEXT1 );
ANS2_2= count_vowels( TEXT2 );
return 0;
}

