#include "Log.h"
#include "Log.cpp"
#include <iostream>

int x = 69;

class X
{
private:
	int a, b;
public:
	const int* const f() const
	{
		
		return &x;
	}
};




int main()
{

	int n = 4;
	//int v[n];
	//int* v;
	//v[i] -> *(v + i)
	//

	int v[4];
	int a = 8;

	v[5] = 9;
	std::cout << a;

	//int a = 3;
	const int * const p  = &a;

	malloc(40);
	

	return 0;
}