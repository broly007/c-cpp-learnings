#include <iostream.h>
#include <conio.h>

int main () {
	int Num;
	int Sum;

	cout << "Enter no of your choce to find weather it's a perfect no or not "<< endl;
	cin >> Num;

	for (int i = 0; i < Num; ++i)
	{
		if (Num % i == 0)
		{
			Sum = Sum + i;
		  {
		  if (Sum == Num)
		
			cout << "Entered number is a perfect number ";
		  }
		} 
		else
			cout << " Not a perfect number";
	}
	getch();
	return 0;
}