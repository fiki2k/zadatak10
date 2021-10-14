// Zadatak je provjeriti je li borj paran ili neparan

#include<stdio.h>
int main()
{
  
   int br;
 
   printf("Unesi broj: ");
   scanf("%d",&br);
 
   // Modul (%) vraca ostatak cjelobrojnog dijeljenja.
   if ( br%2 == 0 )
      printf("%d je paran broj", br);
   else
      printf("%d je neparan broj", br);
 
   return 0;
}
