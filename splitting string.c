#include<stdio.h>
#include <string.h>

int main() {
   char string[50] = "my name is jenish kalathiya";
   char * token = strtok(string, " ");
   while( token != NULL ) {
      printf( " %s\n", token );
      token = strtok(NULL, " ");
   }
   return 0;
}
