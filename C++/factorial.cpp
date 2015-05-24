#include <iostream>

int factorial(int i);

int main()
{
	int i;

	std::cout<<"Enter positive integer: ";
	std::cin>>i;
	std::cout<<"\nFactorial of the given number is: " <<factorial(i)<<"\n";
    std::cout<<"Done!";

	return 0;
}

int factorial(int i)
{
	if(i==0)
		return 1;
	else
		return i*factorial(i-1);
}