#include <stdio.h>

int main(void)
{
  char str[80];

  printf("文字列を入力してください(80文字未満): ");
  gets(str);
  printf("%s\n", str); // 文字列を出力する．

  return 0;
}
