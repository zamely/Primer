#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// ��������
	string strLine;
	while (getline(cin, strLine))
	{
		cout << strLine << endl;
	}
	cout << "line reader end!" << endl;

	cin.clear(); // �����ļ��Ѿ������ˣ�����������״̬����������ֱ�ӽ���ѭ����

	// ��������
	cout << "word reader start!" << endl;
	string strWord;
	while (cin >> strWord)
	{
		cout << strWord << endl;
	}


	return 0;
}

