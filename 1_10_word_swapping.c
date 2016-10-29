#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF){
    if( c == '\t') {
      putchar('\\');
      putchar('t');
      continue;
    }
    else if ( c == '\b'){
      putchar('\\');
      putchar('b');
      continue;
    }
    else if ( c== '\\' ){
      putchar('\\');
      putchar('\\');
      continue;
    }

    putchar(c);
  }

  return 0;
}
