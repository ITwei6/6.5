#include <iostream>
using namespace std;
int main()
{
	//��world�滻��xxxxxxxxxxxx
	string s1("hello world hello bit");
	s1.replace(6, 5, "xxxxxxxxxxxxxxxxxxx");
	//replace(λ�ã��滻�ĸ������滻�ɵ��ַ���)
	s1.replace(6, 20, "666");
	cout << s1 << endl;

	//��s2�����Կո�ȫ���滻��20%
	string s2 = "hello world hello bit";
	string s3;
	for (auto ch : s2)
	{
		if (ch != ' ')
		{
			s3 += ch;
		}
		else
		{
			s3 += "20%";
		}
	}
	s2 = s3;
	cout << s2 << endl;
	cout << s2.c_str() << endl;

	//������һЩC��һЩ�ӿں������
	string filename = "test.cpp";
	filename += ".zip";
	FILE* fout = fopen(filename.c_str(), "r");//
	//���������������ҪC���ַ�����
} 