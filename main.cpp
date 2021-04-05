#include <iostream>
#include <string>

class Base
{

public:
	Base(){}
	virtual  ~Base(){
		std::cout << "am a base\n";
	}
};

class	Derived : virtual public Base
{
	int *p;
public:
	Derived(){ p = new int[5];}
	virtual ~Derived(){
		std::cout << "am a Derived\n";
		delete [] p;
	}
};

int main()
{
	Base	*myObj = new Derived();
	delete myObj;
	return (0);
}
