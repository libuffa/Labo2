#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[] ="- This, a sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
    printf ("%s\n",str);

  printf("Press enter to continue ...");
  getchar();	
  return 0;

}
