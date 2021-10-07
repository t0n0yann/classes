

#include <iostream>
using namespace std;  
struct MyStruct
	{
	double erkar;
	double layn;
	};

class Hatakagic
{
public:
	MyStruct My_struct;	
	Hatakagic()
	{
		this->My_struct.erkar = 1.6;
		this->My_struct.layn = 2.3;
	}
	void P_paragic(Hatakagic* a)
	{
		cout << (2 * a->My_struct.erkar) + (2 * a->My_struct.layn) <<"\n";
	}
	void S_makeres(Hatakagic* b)
	{
		cout << b->My_struct.erkar * b->My_struct.layn << "\n";
	}

};

class Shenq : public Hatakagic
{
public:
	double bardzr;
	Shenq()
	{
		this->bardzr = 3.5;
	}

	void V_caval(Shenq* print)
	{
		cout << print->My_struct.erkar * print->My_struct.layn * this->bardzr << "\n";
	}

	~Shenq()
	{
		cout << "completed";
	}
};

int main()
{
	Hatakagic hatak;
	Shenq arg;
	hatak.P_paragic(&hatak);
	hatak.S_makeres(&hatak);
	arg.V_caval(&arg);
	return 0;
}

