#include <iostream>
int main(){
    int a, b, quotient, reminder;
    std::cout<<"Enter a and b: ";
    std:: cin>>a>>b;
    quotient=a/b;
    reminder=a%b;
    std:: cout<<"Quotient is "<<quotient<<"\nReminder is "<<reminder;
}