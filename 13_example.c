#include <stdio.h> // Example of nested structue.
#include <string.h>
struct Employee
{
   int id;
   char name[20];
   struct Date
    {
      int dd;
      int mm;
      int yyyy;
    }doj;
}e1;
int main( )
{
   //storing employee information
   e1.id=101;
   strcpy(e1.name, "Tim Cook");//copying string into char array
   e1.doj.dd=07;
   e1.doj.mm=07;
   e1.doj.yyyy=2002;

   //printing first employee information
   printf( "employee id : %d\n", e1.id);
   printf( "employee name : %s\n", e1.name);
   printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
   return 0;
}
