
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t t = time(0);
	tm* timePtr = localtime(&t);

	int years = timePtr->tm_year + 1900;
	if (years % 4 == 0)
	{
		cout << "Happy Leap Year";
	}
	else
	{
		cout << "Boring Normal Year";
	}
	
}
