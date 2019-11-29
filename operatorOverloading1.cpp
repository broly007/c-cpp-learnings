#include<iostream>
using namespace std;
class Counter{
    int count;
public:
Counter(){
    count = 1;
}
Counter(int c){
    count = c;
}
int getCount(){
    return count;
}
Counter operator ++ (){
    ++count;
    return Counter(count);
}
Counter operator ++ (int){
    count++;
    return Counter(count);
}
};
int main(){
Counter c1, c2;
cout <<" c1 = "<<c1.getCount()<<endl;
cout << "c2 = "<< c2.getCount()<< endl;
++c1;
c2=++c1;
cout << "c1 = " << c1.getCount() << endl;
cout << "c2 = " << c2.getCount()<< endl;
++c1;
++c2;
++c1;
++c2;
cout << "c1 = " << c1.getCount() <<  endl;
cout << " c2 = " << c2.getCount()<< endl;
c1++;
c2++;
c1++;
c2++;
cout << "c1 = " << c1.getCount() << endl;
cout << "c2 = " << c2.getCount() << endl; 
return 0;
}