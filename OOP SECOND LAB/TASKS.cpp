#include<iostream>
using namespace std;

class livingthings // Parent 1 class
{
	void  breathe()
	{
		cout<<"Living things are breathing"<<endl;
	}
};

class animal :public livingthings // Parent 2 class
{
public:
	void walk()
	{
		cout << "The Animals are walking" << endl;
	}
};
class dog :public animal // Child class
{
	public:
	void bark()
	{
		cout<<"The Dog Barks"<<endl;
	}
};

int main()
{
	dog mydog;
	mydog.walk();
	mydog.bark();
}