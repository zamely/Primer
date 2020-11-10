#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	bool bAddSpace = true;
	cout << "please input whether need space: " << endl;
	cin >> bAddSpace;

	string strResult;
	string strTmp;
	while (getline(cin, strTmp))
	{
		if (bAddSpace && !strResult.empty())
			strResult += ' ';
		strResult += strTmp;
	}

	cout << "The result is : " << strResult << endl;

	return 0;
}
