#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string strResult, strOrg;
	cout << "please input a string" << endl;
	// 注意哦，这里不应该输入中文的
	if (getline(cin, strOrg))
	{
		for (auto ch :strOrg)
		{		
			if (!ispunct(ch))
				strResult += ch;
		}

		cout << "org string " << strOrg << " result " << strResult << endl;
	}

	return 0;
}
