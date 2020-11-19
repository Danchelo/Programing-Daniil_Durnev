int main(){

//Задача №1
int NOD1, NOD2, NOD3;

//НОД с помощью цикла for
int A, B, i;
A= 15;
B= 10;
for (i= A; i> 0; i--) 
if ( A%i == 0 && B%i == 0) break;
NOD1= i;

//НОД с помощью цикла while
while (A && B) {
if (A>B) A %= B;
if (B>A) B %= A;
}
if (A>B) NOD2= A;
if (B>A) NOD2= B;

//НОД с помощью цикла do while
int C, D;
C= 15;
D= 10;
do {if (C>D) C %= D;
      if (D>C) D %= C;
      if (C>D) NOD3= C;
      if (D>C) NOD3= D;
} while (C && D);

//Задача №2
//необходимые переменные
int NUM, j, q, w, ANS1_1, ANS1_2, ANS1_3;
NUM= 12; 
//ответ: если 1 то число простое, если 0 то нет

//с помощью for
if (NUM<= 2) ANS1_1= 1;
for (j = 2; j < NUM; j++) {
if (NUM % j == 0) ANS1_1= 0; 
else ANS1_1= 1;
break; }

//с помощью while
w= 2;
if (NUM< 2) ANS1_2= 1;
while (w >= 2 && w < NUM){
 if (NUM % w == 0) ANS1_2= 0;
else ANS1_2= 1;
break; }

//с помощью do while
q= 2;
if (NUM< 2) ANS1_3= 1;
do {if (NUM % q == 0) ANS1_3= 0;
else ANS1_3= 1;
break; }
while (q >= 2 && q < NUM);

//Задача №3
//если ответ 1 то билет щасливый, если 0 то нет
//переменные и константы
int NUM1, NUM2, NUM3, NUM4, NUM5, NUM6,SUM1, SUM2, SUM3;
const int X=352451;
//нахдим числа по отдельности
NUM1= X%1000000/100000;
NUM2= X%100000/10000;
NUM3= X%10000/1000;
NUM4= X%1000/100;
NUM5= X%100/10;
NUM6= X%10;
SUM1= NUM1+NUM2+NUM3;
SUM2= NUM4+NUM5+NUM6;

//с помощью for
int ANS2_1;
if (SUM1 < SUM2) SUM3= SUM1;
else SUM3= SUM2;
for ( int w=0; w=SUM3; w++) {
if (SUM1==w && SUM2==w) ANS2_1 = 1;
break;}
if (ANS2_1 !=1) ANS2_1= 0;

//с помощью while
int ANS2_2, e;
e= SUM3;
while ( e >= 0 && e <= SUM3 ) {
if (SUM1==e && SUM2==e) ANS2_2 = 1;
break;}
if (ANS2_2 !=1) ANS2_2= 0;

//с помощью do while
int ANS2_3;
do {if (SUM1==e && SUM2==e) ANS2_3 = 1;
break;}
while ( e >= 0 && e <= SUM3 );
if (ANS2_3 !=1) ANS2_3= 0;

//Задача №4
//если ответ 1 то число совершенное, если 0 то нет
int SUM, r, NUM7, ANS3_1, ANS3_2, ANS3_3;
NUM7= 6;
for ( r== NUM7/2; r == 1; r -1 ){
if (NUM7 % r == 0) SUM += r;
if (SUM == NUM7) ANS3_1= 1;
else {ANS3_1= 0;}
break;}

//Задача №5
int NUM8, t, Q1, Q2, Q3, W1, W2, W3, ANS4_1, ANS4_2, ANS4_3;
NUM8= 4;

//с помощью for
Q1= 1;
W1= 1;
if (NUM8 == 0 || NUM8 == 1) ANS4_1= NUM8;
for (t= W1; t= NUM8; t++){Q1++;
W1= Q1*Q1;
if (Q1== NUM8-1) break;}
ANS4_1= Q1-1;

//с помощью while
Q2= 1;
W2= 1;
if (NUM8 == 0 || NUM8 == 1) ANS4_2= NUM8;
while (W2 <= NUM8){ Q2++;
W2= Q2*Q2;}
ANS4_2= Q2 - 1;

//с помощью do while
if (NUM8 == 0 || NUM8 == 1) ANS4_3= NUM8;
Q3= 1;
W3= 1;
do {Q3++;
W3= Q3*Q3;}
while (W3 <= NUM8);
ANS4_3= Q3 - 1;

return 0;
}
