#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Animals {
private:

	string phrase;

public:

	virtual void Voice()
	{
		cout << phrase;
	}
};

class Dog : public Animals
{
private:

	string CurPhrase = "Woof\n";

public:

	virtual void Voice() override {
		cout << CurPhrase;
	}
};

class Cat : public Animals
{
private:

	string CurPhrase = "Meow\n";

public:

	virtual void Voice() override {
		cout << CurPhrase;
	}

};

class Cow : public Animals
{
private:

	string CurPhrase = "Moo\n";

public:

	virtual void Voice() override {
		cout << CurPhrase;
	}

};

int main()
{
	Animals** Zoo = new Animals * [3];
	Zoo[0] = new Dog;
	Zoo[1] = new Cat;
	Zoo[2] = new Cow;

	for (int i = 0; i < 3; i++)
	{
		Zoo[i]->Voice();
	}

	delete[] Zoo;
}
