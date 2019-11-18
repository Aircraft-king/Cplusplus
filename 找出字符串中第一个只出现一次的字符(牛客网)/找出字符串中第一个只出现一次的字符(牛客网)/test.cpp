#include<iostream>
#include<stdio.h>
using namespace std;
#include<string>

int find_first_alone_str(string& s)
{
	int count = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		count = 0;
		for (int j = 0; j < s.size(); ++j)
		{
			if (s[i] == s[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			return i;
		}
	}
	return -1;
}

int main() {
	char str[100];
	while (cin >> str) {
		string s(str);
		int a = find_first_alone_str(s);

		if (a == -1)
			printf("%d\n", a);
		else
			cout << s[a] << endl;
	}
	return 0;
}
