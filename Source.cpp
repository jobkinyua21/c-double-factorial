#include<stdio.h>
#include  <Iostream>
using namespace  std;


unsigned int  doublefactorial(unsigned int n);
int main()
{
	int n, fact_num;

	cout << "enter random number to find fact:";
	cin >> n;
	if (n < 0)
		cout << "negative int not fact" << endl;

	else
	{
		fact_num = doublefactorial(n);
		cout << "fact is :" << fact_num;
	}
	return 0;


	

}
unsigned int  doublefactorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	if (n%2 ==0)
		return --n * doublefactorial(n - 1);
	else 
		return n * doublefactorial(n - 2);

}


