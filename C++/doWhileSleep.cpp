#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;

int main(void)
{
   int i=0;

   do
   {
       cout << i;
       i++;
   } while (i<10);
   return 0;
}