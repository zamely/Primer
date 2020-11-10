#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// 按句来读
	string strLine;
	while (getline(cin, strLine))
	{
		cout << strLine << endl;
	}
	cout << "line reader end!" << endl;

	cin.clear(); // 上面文件已经结束了，清理输入流状态。否则下面直接结束循环。

	// 按词来读
	cout << "word reader start!" << endl;
	string strWord;
	while (cin >> strWord)
	{
		cout << strWord << endl;
	}


	return 0;
}

