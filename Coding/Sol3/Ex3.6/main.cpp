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
		for (auto& ch : strTest)
		{
			ch = chReplace;
		}

		cout << strTest << endl;
	}

	return 0;
}
