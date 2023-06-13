#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int sum=a+b;
    int diff=a-b;
    int product=a*b;
    int division=a/b;
    int modulous=a%b;
    cout<<"addition: "<<sum<<endl;
    cout<<"subtraction: "<<diff<<endl;
    cout<<"product: "<<product<<endl;
    cout<<"division: "<<division<<endl;
    cout<<"modulous: "<<modulous<<endl;
    return 0;
}
