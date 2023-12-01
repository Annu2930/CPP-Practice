#include<iostream>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book inputBook()
{
    struct Book b;
    cout<<"Enter bookid, title and prices";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;

}
void displayBook(struct Book b)
{
    cout<<endl;
    cout<<b.bookid<<" ";
    cout<<b.title<<" ";
    cout<<b.price<<" "<<endl;
    


}
int main()
{
    struct Book b1={1,"C in Depth", 225.0f};
    struct Book b2;
    b2=inputBook();
    displayBook(b1);
    displayBook(b2);
    cout<<endl;
  return 0;  

     
}