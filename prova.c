
#include <stdio.h>
#include <string.h>
int main()
{

char c[20]="pippo ciao";

int i=0;
while(c[i]!='\0'){
printf("%c",c[i]);
i++;
}

#ifdef MIO
printf("\n%d\n",(int)strlen(c));
#endif
}

