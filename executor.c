#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
  printf("What would you like to do? ");
  char * line;
  line = (char *)malloc(sizeof(char *));
  fgets(line, 256, stdin);
  line[strlen(line) - 1] = 0;
  char *commands[20];
  int i = 0;
  while (line){
    commands[i] = strsep(&line," ");
    i++;
  }
  commands[i] = NULL;
  execvp(commands[0],commands);
  return 0;
}
