#include "Property.h"
#include "Player.h"
#include <iostream>

using namespace std;

int main()
{
	//Property *p1 = new Property(2);
	//Player *PL1 = new Player("Amir");
	//Player Player1("Amir");
	//Property p2(2);
	Player Player1("Amirone");
	Property p2(2);
	Property p1(1);
	Property p3(3);
	Property p4(0);
	//cout << PL1->getName() << endl;
	//p2->buyLand(PL1);
	p2.buyLand(&Player1);
	cout << p2 << endl;
	p2.buyHouse();
	cout << p2 << endl;
	cout << p2.getOwner().getName() << endl;
	//p1->ripPlayer();
	//cout << p1->getOwner().getName() << endl;


	//cout << p1->getRentPrice() << endl;
	//p1->buyHouse();
	//cout << p1->getRentPrice() << endl;
	//p1->buyHotel();
	//cout << p1->getRentPrice() << endl;

	



	//cout << PL1->getName() << endl;
	//p2->buyLand(PL1);
	p2.buyLand(&Player1);
	cout << p4 << endl;
	cout << p1 << endl;
	p2.buyHouse();
	cout << p2 << endl;
	cout << p3 << endl;


	return 0;
}
