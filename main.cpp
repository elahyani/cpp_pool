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
	// Base	*myObj = new Derived();
	// delete myObj;
	char	**mTable = new char*[3];
	// int		len = (int) sizeof(mTable)/sizeof(mTable[0]);
	int		len = sizeof(mTable)/sizeof(int *);
	// int		len = *(&mTable + 1) - mTable;
	int		length = 0;

	while (mTable[length])
	{
		length++;
	}
	std::cout << "length = " << length << std::endl;
	std::cout << "len    = " << len << std::endl;
	return (0);
}
