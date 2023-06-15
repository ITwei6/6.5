#include <iostream>
using namespace std;
int main()
{
	//将world替换成xxxxxxxxxxxx
	string s1("hello world hello bit");
	s1.replace(6, 5, "xxxxxxxxxxxxxxxxxxx");
	//replace(位置，替换的个数，替换成的字符串)
	s1.replace(6, 20, "666");
	cout << s1 << endl;

	//将s2中所以空格全部替换成20%
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

	//适用于一些C的一些接口函数配合
	string filename = "test.cpp";
	filename += ".zip";
	FILE* fout = fopen(filename.c_str(), "r");//
	//调用这个函数必须要C的字符类型
} 