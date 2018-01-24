#include <stdio.h>

int main(void)
{
  char str[80];
  int i;

  printf("文字列を入力してください(80文字未満): ");
  gets(str);
  for (i = 0; str[i]; i++)
    printf("%c", str[i]);

  return 0;
}
