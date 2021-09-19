#include <iostream>
#include <cstring>
#include <random>

using namespace std;

class YugiohCard
{
public:
	string name;
	string description;
	int level = 0;
	string picture;
	void output();
};

int genNum()
{
std::random_device rd; // obtain a random number from hardware
std::mt19937 gen(rd()); // seed the generator
std::uniform_int_distribution<> distr(0, 6); // define the range

return distr(gen);

//for (int n = 0; n < 40; ++n)
//	std::cout << distr(gen) << ' '; // generate numbers
}

void YugiohCard::output()
{
	cout << name << endl << description << endl << "Level: " << level << endl;
}

int main()

{
	YugiohCard ygocardcatalog[50];
	YugiohCard mydeck[20];
	YugiohCard myhand[5];

	ygocardcatalog[0].name = "Dark Magician";
	ygocardcatalog[0].description = "A wizard skilled in the dark arts.";
	ygocardcatalog[0].level = 7;

	ygocardcatalog[1].name = "Blue Eyes White Dragon";
	ygocardcatalog[1].description = "A legendary dragon that few have faced and lived to tell about.";
	ygocardcatalog[1].level = 8;

	ygocardcatalog[2].name = "Summoned Skull";
	ygocardcatalog[2].description = "A menacing creature that all others fear.";
	ygocardcatalog[2].level = 5;

	ygocardcatalog[3].name = "Mirror Wall";
	ygocardcatalog[3].description = "A scary wall";
	ygocardcatalog[3].level = 4;

	ygocardcatalog[4].name = "Giant Soldier of Stone";
	ygocardcatalog[4].description = "A big soldier made of stone.";
	ygocardcatalog[4].level = 3;

	ygocardcatalog[5].name = "Black Hole";
	ygocardcatalog[5].description = "Destroys all monsters on the field.";
	ygocardcatalog[5].level = 0;

	ygocardcatalog[6].name = "Magician's Cirle";
	ygocardcatalog[6].description = "Traps a monster for 3 turns.";
	ygocardcatalog[6].level = 0;

//	ygocardcatalog[0].output();

	//genNum() pulls random int
//	ygocardcatalog[genNum()].output();


	for (int i=0; i < 20; i++)
	{
		mydeck[i] = ygocardcatalog[genNum()];
		mydeck[i].output();
	}


	
	//implement shuffling and array manipulation using RNG
	//implement hands using variable placeholders
	// magic and traps: class within a class

	return 0;
}
