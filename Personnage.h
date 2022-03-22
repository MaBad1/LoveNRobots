#pragma once
#include <iostream>

using namespace std;



class Personnage
{
private:

	string name;
	int health;
	int flirt;
	int ego;
	bool ko;

public:

	Personnage();

	Personnage(string n, int h, int f, int e, bool k);

	string getName() const;
	void setName(string n);

	int getHealth() const;
	void setHealth(int h);

	int getFlirt() const;
	void setFlirt(int f);

	int getEgo() const;
	void setEgo(int e);

	bool getKo() const;
	void setKo(bool k);

	bool operator>(Personnage& target);

	bool operator<(Personnage& target);

	friend ostream& operator<<(ostream& os, Personnage const& p);

};

