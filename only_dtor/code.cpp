#include <new>
#include <iostream>

using namespace std;

class B{
	public:
	B(){
		cout << "ctor" << endl;
	}

	~B(){
		cout << "dtor" << endl;
	}
};

int main()
{
	B *p = static_cast<B*>(operator new(sizeof(B)));
	delete p;
	return 0;
}
