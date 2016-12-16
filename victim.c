#include <stdio.h>
int main() {
  char name[64];
  printf("%p\n", name);  // Print address of buffer.
  puts("What's your name?");
  fgets(name, sizeof(name), stdin);
  printf("Hello, %s!\n", name);
  return 0;
}






