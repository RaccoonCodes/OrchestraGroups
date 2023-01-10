#include <iostream>
#include "OrchList.h"
using namespace std;


int main() {
	int vlin = 0;
	int vila = 0;
	int cllo = 0;

	Orchestra groupA;
	Orchestra groupB;
	Orchestra totalGroup;

	cout << "Enter how many violins are in group A ";
	cin >> vlin;

	cout << "\nEnter how many violas are in group A ";
	cin >> vila;

	cout << "\nEnter how many cellos are in group A ";
	cin >> cllo;
	
	groupA.setViolins(vlin);
	groupA.setViolas(vila);
	groupA.setCellos(cllo);

	cout << "\nEnter how many violins are in group B ";
	cin >> vlin;

	cout << "\nEnter how many violas are in group B ";
	cin >> vila;

	cout << "\nEnter how many cellos are in group B ";
	cin >> cllo;

	groupB.setViolins(vlin);
	groupB.setViolas(vila);
	groupB.setCellos(cllo);

	totalGroup = groupA + groupB;

	cout << "\nGroup A: "<< groupA.getTotal() << "\nGroup B: " << groupB.getTotal() <<"\nOverall group: " << totalGroup.getTotal();

	
}
