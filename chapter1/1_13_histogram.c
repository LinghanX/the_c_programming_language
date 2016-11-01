/*
 * Write a program to print a histogram of the lengths of words in its input.
 */
#include <stdio.h>

#define LONGEST_WORD_LENGTH 44 //pneumonoultramicroscopicsilicovolcanoconiosis, longest english word ever!
#define IN 1
#define OUT 0

int main(){
  int histogram[LONGEST_WORD_LENGTH+1];
  int c = EOF;
  int i = 0;
  int j = 0;
  int length = 0;
  int state = IN;

  for(int i = 0; i < LONGEST_WORD_LENGTH; i++)
    histogram[i] = 0;

  while((c = getchar()) != EOF){
    ++length;

    if(c == ' ' || c == '\t' || c == '\n'){
      state = OUT;
      --length;
    }

    if(state == OUT){
      if( length != 0 && length <= LONGEST_WORD_LENGTH )
        ++histogram[length];

      state = IN;
      length = 0;
    }
    /* Below is the first attempt, which failed */
    /* int length = 0; */

    /* while((c != '\n') && (c != '\t') && (c != ' ')){ */
      /* length++; */
    /* } */

    /* histogram[length -1]++; */
    /* length = 0; */
  }

  for(int i = 1; i < LONGEST_WORD_LENGTH; i++){
    printf("|%2d|", i);
    for(int j = 0; j < histogram[i]; j++)
      printf("|");

    printf("\n");
  }

  return 0;
}
