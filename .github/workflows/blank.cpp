#include<iostream>
#include<time.h>


//ciag fibonaciego w rekurencji, mierzony jest czas
using namespace std;

long int fib(int n)
{
	
	if (n < 0)
	{
		cout << "nie istnieje ujemny wyraz ciagu" << endl;
		return 1*(-1);
	}
	if (n == 0)
	{
		cout << "zerowym wyrazem ciagu jest zero" << endl;
		return 0;
	}
	if (n == 1 || n == 2) return 1;
	else return fib(n - 1) + fib(n - 2);//funkcja wywoluje samo siebie az do uzyskania wyniku

}

int main()
{
	clock_t start, stop;
	double czas;
	start = clock();
	int n;
	cin >> n;
	start = clock();
	cout << fib(n) << endl;
	stop = clock();
	czas = double(stop / start) / CLOCKS_PER_SEC;
	cout << czas << endl;

	system("pause");
}
