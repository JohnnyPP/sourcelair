#include <iostream>
#include <time.h>
#include <unistd.h>

// http://stackoverflow.com/questions/902261/is-there-a-decent-wait-function-in-c

using namespace std;

int main(void)
{
   cout << "test1" << endl;
   sleep(1);         //make the programme waiting for 5 secondes
   cout << "test2" << endl;
   sleep(1);         // wait for 2 secondes before closing

   return 0;
}