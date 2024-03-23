// 19.5. Понять принципы реализации наследования в C++ и особенности работы ключевых слов virtual и override.

#include <iostream>

using namespace std;

class Animal
{
protected:
	string Sound;
public:
	Animal() {}
	Animal(string _Sound) : Sound(_Sound) {}
	
	virtual void Show()
	{
		cout << "This is Animal" << endl;
	}

	virtual void Voice()
	{
		cout << Sound << endl;
	}
};

class SpaceWolf : public Animal
{
public:
	SpaceWolf() {}

	void Show() override
	{
		cout << "Space Wolf";
	}

	void Voice() override
	{
		cout << "Rrrrr!" << endl;
	}
};

class MartianFox : public Animal
{
public:
	MartianFox() {}

	void Show() override
	{
		cout << "Martian Fox";
	}

	void Voice() override
	{
		cout << "Purr-purr-purr!" << endl;
	}
};

class GalacticGoose : public Animal
{
public:
	GalacticGoose() {}

	void Show() override
	{
		cout << "Galactic Goose";
	}

	void Voice() override
	{
		cout << "Honk-honk!" << endl;
	}
};

int main()
{
	Animal* CosmicZoo[3] = { new SpaceWolf , new MartianFox, new GalacticGoose };
		
	for (Animal* A : CosmicZoo)
	{
		A->Show();
		cout << " says: ";
		A->Voice();
	}

	return 0;
}