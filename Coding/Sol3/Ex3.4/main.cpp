#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string strA, strB;

	cout << "please input two string:" << endl;
	getline(cin, strA);
	getline(cin, strB);

	cout << "please input compare way, 0-size, 1-dictionary:" << endl;
	int iWay = 0;
	cin >> iWay;

	if (0 == iWay)
	{
		if (strA.size() == strB.size())
			cout << "equal length" << endl;
		else if (strA.size() > strB.size())
			cout << strA << endl;
		else
			cout << strB << endl;
	}
	else if (1 == iWay)
	{
		if (strA == strB)
			cout << "equal string" << endl;
		else if (strA > strB)
			cout << strA << endl;
		else
			cout << strB << endl;
	}
}

