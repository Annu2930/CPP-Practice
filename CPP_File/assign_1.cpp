#include<iostream>
//wap in c++ to print Hello on firstline and MySirG on second line using endl
using namespace std;
int q1(){
    cout<<"Hello "<<endl<<"MySirG";
}
//q3wap in c++ to print sum of two numbers
int q3(){
    int a,b,sum;
        cout<<"Enter two number:";
         cin>>a>>b;
         sum=a+b;
         cout<<"Sum is "<<sum<<endl;
}
//q4wap in c++ calculate area of circle 
int q4(){
    float r,area;
        cout<<"Enter radious:";
         cin>>r;
         area=3.14*r*r;
         cout<<"area is"<<area<<endl;
}
//q4wap in c++ calculate volume of cuboid 
int main(){
    int l,b,h,V;
        cout<<"Enter length,breadth,height:";
         cin>>l>>b>>h;
         V=l*b*h;
         cout<<"volume is"<<V<<endl;
}

