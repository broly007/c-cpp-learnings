#include <iostream.h>
#include < conio.h>

int main(){
    
    int a = 0;
    int b = 1;
    int c, n;

  	cout << "Enter limit :" << endl;
  	cin >> n;

  	for (int i = 0; i < n ; ++i)
  	{
  		c = a + b;
  		a = b;
  		b = c;
  		cout << a << endl;
  	}
	getch();
	return 0;
}