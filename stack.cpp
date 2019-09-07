#include <iostream>
#include <conio.h>
using namespace std;
class stack{
 static const int max = 10;
 int top;
 int st[max];

 public:
   stack(){
	  	top = 0;
   }
	void push(int var){
	 	st[++top] = var; 
	}
	int pop(){
		return st[top--];		
	}
};


 int main(){
	stack s1;
	s1.push(11);
	s1.push(22);
	cout << "1 : " << s1.pop() << endl;
	cout << "2 : " << s1.pop() << endl;
  getch();
 return 0;
}