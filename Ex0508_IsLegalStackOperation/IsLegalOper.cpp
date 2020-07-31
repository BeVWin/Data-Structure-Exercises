#include <iostream>
#include <string>
#include <vector>
using namespace std;

int IsLegal(string S, int M)
{
	int current_size = 0;
	for (int i = 0; i < (int)S.length(); i++)
	{
		switch (S[i])
		{
		case 'S':
			current_size++;
			break;
		case 'X':
			current_size--;
			break;
		default:
			return 0;
			break;
		}
		if (current_size<0 || current_size>M)
		{
			return 0;
		}
	}
	if (current_size == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int N = 0, M = 50;
	cin >> N >> M;

	// Clean the buffer
	string clean;
	getline(cin, clean);

	vector<string> Strings;
	for (int i = 0; i < N; i++)
	{
		string temp;
		getline(cin, temp);
		Strings.push_back(temp);
	}
	for (int i = 0; i < (int)Strings.size(); i++)
	{
		if (IsLegal(Strings[i], M))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
