#include <iostream.h>
#include <conio.h>

int main() {
 	int Num1, Num2;
 	int Sum1, Sum2;

 	cout << " enter 2 pair of number to find its ambient pair or not" << endl;
 	cin >> Num1 >> Num2;

 	for (int i = 1; i < Num1; ++i)
 	{
 	    Sum1 = Sum1 + i;
 	          	
 	}

 	for (int j = 1; j < Num2; j++)
 	{
 		Sum2 = Sum2 + j;
 	}

 	if (Sum1 == Sum2)
 	{
 		cout << "The pair is ambient number " << endl;
 	}
 	else
 		cout << "Not ambient numbers " << endl;

 	getch();
	return 0;
}