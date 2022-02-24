#include <iostream>
#include <set>
#include <iterator>
#include <cstring>

using namespace std;

set<string>::iterator it;

bool containts(set<string> setToCheck, string valueToCheck) {
	for (it = setToCheck.begin(); it != setToCheck.end(); ++it) {
		if (*it == valueToCheck) {
			return true;
		}
	}
}

void unionWith(set<string> setA, set<string> setB) {
	set<string> setTemp;

	for (it = setA.begin(); it != setA.end(); ++it) {
		set.Temp.insert(*it);
	}

	for (it = setB.begin(); it != setB.end(); ++it) {
		if (!contains(setTemp, *it)) {
			setTemp.insert(*it);
		}
	}

	for (it = setTemp.begin(); it != setTemp.end(); ++it) {
		cout << *it << " / ";
	}
}

int main(){

	set<string> setA = { "Ivan", "Kaloyan", "Kiril", "Mario" };
	set<string> setB = { "Martin", "Mario", "Petar", "Kiril" };

	unionWith(setA, SetB);

}
