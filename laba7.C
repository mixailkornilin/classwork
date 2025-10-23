#include <stdio.h>

int main(){
  int N;

  printf("Введите целое чмсло N > 1: ");
  scanf("%d", &N);

  if (N <= 1){
  printf("Ошибка: N должно юыть больше 1!\n");
  return 1;
}

  int K = 0;
  int sum = 0;

  while (sum + (K + 1) <= N){
  K ++;
  sum += K;
}

  printf("Наибольшее K: %d\n", K);
  printf("Сумма 1+2+...+%d = %d\n", K, sum);

  return 0;
}
