#include<iostream>
using namespace std;
int add(int,int);
int main(){
       int a,b;
        cout<<"Enter two number:";
         cin>>a>>b;
         cout<<"Sum is "<<add(a,b)<<endl;
    //endl is a manupulator
       return 0;
}
int add(int x,int y){
    return x+y;
}
/*
#include<iostream>
int main(){
       int s,i;
      std::cout<<"Enter a number:";
       std::cin>>i;
       s=i*i;
       std::cout<<"square of"<<i<<" is "<<s;
       return 0;
}
int main(){
       int s,i;
        cout<<"Enter a number:";
         cin>>i;
          s=i*i;
        cout<<"square of "<<i<<" is "<<s<<endl;//endl is a manupulator
    return 0;
}
//we can rn our program in c++ using printf function
/*#include<stdio.h>
int main(){
       int s,i;
       printf("Enter a number:");
       scanf("%d",&i);
       s=i*i;
       printf("square of %d is %d",i,s);
       return 0;
}*/