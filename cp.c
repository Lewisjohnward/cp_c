
#include <stdlib.h>

31 int main (int argc, char *argv[])
{
  FILE *fp, *newfp;
  //Ensure correct usage 
  if(argc == 1 || argc < 3)
  {
    printf("Usage : %s <oldfilename> <newfilename>\n", argv[0]);
    exit(1);
  }
  fp = fopen(argv[1], "r");
  if(fp == NULL)
  { 
      printf("Error: opening source\n");
      exit(1);
   }   
  newfp = fopen(argv[2], "w");
  if(fp == NULL)
  {
    printf("Error: creating dest\n");
    exit(1);
  }   
  char buff;
  while((fread(&buff, 1, 1, fp)) !=  0)
  {
    fwrite(&buff, 1, 1, newfp);
  }   
  return 0;
  }             
