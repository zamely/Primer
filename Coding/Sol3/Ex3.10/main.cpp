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
	// ע��Ŷ�����ﲻӦ���������ĵ�
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
