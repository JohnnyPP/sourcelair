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
       sleep(1);
       i++;
   } while (i<10);
   return 0;
}