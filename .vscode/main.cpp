#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int salary;

    Employee(string name,int salary,int secPass){
        this->name=name;
        this->salary=salary;
        this->secPass=secPass;

    }
    void getsecPass(){
        cout<<"The secret password of employee is "<<this->secPass<<endl;
    }

    void printDetails(){
    cout << "the name of our first employee is " << this->name << " and his salary is " << this->salary<<" dollars"<< endl;
        
    }
    private:
    int secPass;
};

int add(int a, int b)
{
    return a + b;
}
int product(int a, int b)
{
    return a * b;
}
int main()
{

    // cout << "Hello world Omkar" << endl;
    // cout << "Next Line" << endl;
    // single line comment

    /*
    this is a multi-line comment
    */

    //    datatyps -
    /*
        int a,b,c;
        a=7,b=10,c=30;
        short _sa=10;
        string name="omkar shelke";
        cout<<a<<" "<<b<<" "<<c<<" "<<_sa<<endl;
        cout<<"Hi i am "<<name<<endl;
        */

    // // camelCase
    // int marksInMaths=83;
    // cout<<"Marks of the student in maths is: "<<marksInMaths<<endl;

    // integer datatype hierarchy from small to big
    // short a;
    // int b;
    // long c;
    // long long d;

    // precision in increasing order
    // float const score=94.30; //const can not be changed.
    // double score1=90.921;
    // long double score2=45.333222;
    // // score=97;
    // cout<<"score is "<<score<<endl;
    // cout<<"score is "<<score1<<endl;
    // cout<<"score is "<<score2<<endl;

    // user inputs
    /*
    int a,b;
    cout<<"enter first number: "<<endl;
    cin>>a;
    cout<<"enter second number: "<<endl;
    cin>>b;
    cout<<"sum: "<<a + b<<endl;
    cout<<"difference: "<<a - b<<endl;
    cout<<"product: "<<a * b<<endl;
    cout<<"division: "<<(float)a / b<<endl;
    cout<<"remainder: "<<a % b<<endl;
    */

    //    if else conditionals
    /*
        int age;
        cout<<"enter your age: "<<endl;
        cin>>age;
        if(age>150 || age<1){
            cout<<"invalid age"<<endl;
        }else if(age<=18){
            cout<<"You can't vote"<<endl;
        }else{
            cout<<"you can vote"<<endl;
        }
        */

    /*
 int age;
 cin >> age;
 switch (age)
 {
 case 12:
     cout << "You are 12 years old" << endl;
     break;
 case 18:
     cout << "You are 18 years old" << endl;
     break;
 default:
     cout << "You are neither 12 nor 18 years old" << endl;
     break;
 }
 */

    //    loops
    /*
        int index=0;
        while (index<34){
            cout<<"we are index number "<<index<<endl;
            index=index+1;
        }*/

    /*
        int index=0;
        do{
            cout<<"we are index number "<<index<<endl;
            index=index+1;
        }while(index<32);*/

    /*
        for (int i = 1; i<=50; i++)
        {
            cout<<"value of i is "<<i<<endl;
        }
        */

    //    functions
    //     cout<<"enter two numbers: "<<endl;
    //     int a,b;
    //     cin>>a;
    //     cin>>b;
    //     cout<<"the sum is; "<<add(a,b)<<endl;
    //     cout<<"the product is; "<<add(a,b)<<endl;

    // arrays
    // int arr[]={1,2,3};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;

    // int marks[6];
    // for(int i=0;i<6;i++){
    //     cout<<"enter the marks of "<<i<<"th student "<<endl;
    //     cin>>marks[i];
    // }
    // for(int i=0;i<6;i++){
    //     cout<<"enter the marks of "<<i<<"th student is "<<marks[i]<<endl;
    // }

    // int arr[2][3]={{1,2,3},
    // {4,5,6}};
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<"value of "<<i<<","<<j<<" is "<<arr[i][j]<<endl;
    //     }
    // }

    // type casting
    // int a=123;
    // float b=90.97;
    // cout<<(float)a<<" "<<(int)b<<endl;

    // // strings
    // string name="omkar";
    // cout<<"The name is "<<name<<endl;
    // cout<<"length of name is "<<name.length()<<endl;
    // cout<<"the  name is "<<name.substr(0,3)<<endl; //end exculsive

    // pointers
    // int a=34;
    // int *ptra=&a;
    // float b=10.10;
    // float *fptra=&b;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    Employee om("omkar shelke",344,1234);
    // om.name = "omkar";
    // om.salary = 100000;
    om.secPass;
    om.printDetails();
    om.getsecPass();
    return 0;
}
