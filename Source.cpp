#include <iostream>
#include <string>

using namespace std;

//ignore the commented out class, unsure why but it didn't function, use the uncommented one below

//class Kite
//{
//public:
//	int numOfDeltaKite = 0; //Delta Kite 
//	int numOfBoxKite = 0; //box kite
//	std::string kiteName = "unknown";
//	void setname(std::string name);
//
//};
//
//void Kite::setname(std::string name) { kiteName = name; }

class Kite
{
public:
	int numOfDeltaKite = 0; // Delta Kite
	int numOfBoxKite = 0; // Box Kite
	std::string kiteName = "unknown";
	std::string asStr();
	void setname(std::string nam);
};
void Kite::setname(std::string nam) { kiteName = nam; }

Kite k = { 5,6,"fred" };
Kite* kay1;
Kite* Kay2;

std::string Kite::asStr()
{
	return to_string(numOfDeltaKite) + " " + to_string(numOfBoxKite) + " " + kiteName;
}


int indy = 24;
int* ptri = nullptr;


int main1()
{
	ptri = &indy;
	cout << "indy=" << indy << "\n";
	cout << "*ptri=" << *ptri << "\n";

	indy = 67;
	cout << " indy=" << indy << "\n";
	cout << " ptri=" << ptri << "\n";
	cout << "*ptri=" << *ptri << "\n";

	*ptri = 310;
	cout << " indy=" << indy << "\n";
	cout << " ptri=" << ptri << "\n";
	cout << "*ptri=" << *ptri << "\n";

	cout << "--------------------------" << "\n";

	ptri = new int;
	cout << "\n";
	cout << " indy=" << indy << "\n";
	cout << " ptri=" << ptri << "\n";
	cout << "*ptri=" << *ptri << "\n";

	cout << "\n";
	*ptri = 99;
	cout << " indy=" << indy << "\n";
	cout << " ptri=" << ptri << "\n";
	cout << "*ptri=" << *ptri << "\n";

	ptri = new int(42);
	cout << "\n";
	cout << " indy=" << indy << "\n";
	cout << " ptri=" << ptri << "\n";
	cout << "*ptri=" << *ptri << "\n";

	delete ptri;
	ptri = nullptr;



	return 0;
}

int main2()
{
	cout << "k=   " << k.asStr() << "\n";

	kay1 = &k;

	cout << "(*kay1)= " << (*kay1).asStr() << "\n";

	cout << "\n";
	k.numOfBoxKite = 61;
	(*kay1).numOfDeltaKite = 66;
	cout << "k=       " << k.asStr() << "\n";
	cout << "(*kay1)= " << (*kay1).asStr() << "\n";

	return 0;
}

int main3()
{
	Kite arrK[4];
	arrK[0] = Kite{ 7,2,"trixie" };
	arrK[1] = Kite{ 8,2,"bixixie" };
	arrK[2] = Kite{ 9,2,"nixxie" };
	arrK[3] = Kite{ 107,2,"wackedie" };

	for (int i = 0; i < 4; i++) { cout << arrK[i].asStr() << "\n"; }

	Kite* arrP[4];
	arrP[0] = new Kite{ 7,41,"trixie" };
	arrP[1] = new Kite{ 8,41,"bixixie" };
	arrP[2] = new Kite{ 9,41,"nixxie" };
	arrP[3] = new Kite{ 107,41,"wackedie" };

	for (int i = 0; i < 4; i++) { cout << (*arrP[i]).asStr() << "\n"; }

	return 0;
}

// can comment un and out thee different options as required

int main()
{
	cout << endl;
	main1();
	cout << endl;
	//main2();
	cout << endl;
	//main3();

	cout << endl;
}