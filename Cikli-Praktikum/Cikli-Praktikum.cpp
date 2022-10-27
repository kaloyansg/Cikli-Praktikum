#include <iostream>
using namespace std;

int main()
{
    /*
	int n;
    cin >> n;
	int faktoriel = 1;
	for (int i = 2; i <= n; i++)
	{
		faktoriel *= i;
	}
	cout << faktoriel;			*/

	
	/*
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a = i * i + 3 * i;
		cout << a << endl;
	}								*/							



	/*
	int n, maxNegative, num;

	cin >> n;
	maxNegative = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> num;

		if (num < 0)
		{
			if (maxNegative == 0 || maxNegative < num) maxNegative = num;
		}
	}
	cout << maxNegative;														*/



	/*
	int n, first, second, figunaci;
	cin >> n;
	first = 0; second = 1;

	if (n == 1) cout << first;
	else if (n == 2) cout << second;
	else
	{
		for (int i = 3; i <= n; i++)
		{
			figunaci = first + second;
			first = second;
			second = figunaci;
		}
		cout << figunaci;
	}										*/



	/*
	int n, num, sum;
	cin >> n;
	sum = 0;
	bool subirai = true;

	for (int i = 1; i <= n; i++)
	{
		cin >> num;
		if (num == 0) subirai = false;
		if (subirai)sum += num;
		
	}
	cout << sum;					*/


	/*
	int num, sbor;
	cin >> num;
	sbor = 0;

	while (num > 0)
	{
		sbor += (num % 10);
		num /= 10;
	}
	cout << sbor;				*/



	/*
	int num, stepen;
	cin >> num >> stepen;
	int mnpjitel = num;

	for (int i = 2; i <= stepen; i++)
	{
		num *= mnpjitel;
	}
	cout << num;				*/

	
	/*
	int num; bool prosto = true;
	cin >> num;
	int granica = sqrt(num);
	
	for (int i = num-1; i >= granica; i--)
	{
		if (num % i == 0) { prosto = false; break; }
	}

	if (prosto) cout << "yes";
	else cout << "no";									*/


	
	/*
	for (int i = 'A'; i <= 'Z'; i++)
	{
		if (i != 65 && i != 69 && i != 73 && i != 79 && i != 85 && i != 89)
			cout << (char)i << endl;
	}																					*/
	
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j) cout << 0;
			else if (i > j) cout << "+";
			else if (i < j) cout << "-";
		}

		cout << endl;
	}
	
}