


#include <iostream>
using namespace std;
int main()
{ int m, cp, e, p ,total,avg, result;
    cout<<"Student Result"<<endl;
    cout<<"Enter marks of Maths";
    cin>>m;
     cout<<"Enter marks of Computer programming";
    cin>>cp;
    cout<<"Enter marks of English";
    cin>>e;
cout<<"Enter marks of Physics";
    cin>>p;
    cout<<"total marks of student out of 400";
    total=(m+cp+e+p);
    cout<<total<<endl;
    cout<<"Average marks of student "<<endl;
    avg=(m+cp+e+p)/4;
    cout<<avg<<endl;
    cout<<"Results"<<endl;
    if(total<150)
    cout<<"Student is failed";
    else
    cout<<"Student is passed";
}
