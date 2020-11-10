#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "this is a program replace string" << endl;
	char chReplace = 'x';
	cout << "please input a replaced char : " << endl;
	cin >> chReplace;
	cin.ignore(); // 忽略输入空白对后面getline的影响
	string strTest;
	if (getline(cin, strTest))
	{
		string::size_type szLen = strTest.size();
		string::size_type index = 0;
		while (index < szLen)
		{
			strTest[index++] = chReplace;
		}

		cout << strTest << endl;
	}

	return 0;
}
