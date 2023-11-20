
#include "Controller.h"
#include "Model.h"
#include<iostream>
#include<cmath>
using namespace std;
Controller::Controller ()
{

cin>>did;
switch (did)
{
case  '+':
   do
   {
    /* code */
set();
cout<<"*******************************************\n";
    cout<<"the sum numbers is : "<<sum()<<endl;
    cout<<"*******************************************\n";
    cout<<"\n did you want again? \t (y,n) \n";
   cin>>did;
   } while (did=='y');   cout<<"bye";

    break;

case  '-':
   do
   {
    /* code */
set();
cout<<"*******************************************\n";
    cout<<"the sum numbers is : "<<min()<<endl;
    cout<<"*******************************************\n";
    cout<<"\n did you want again? \t (y,n) \n";
   cin>>did;
   } while (did=='y');   cout<<"bye";
   
    break;


case  '*':
   do
   {
    /* code */
    set();
    cout<<"*******************************************\n";
    cout<<" the sum numbers is : "<<mult()<<endl;
    cout<<"*******************************************\n";
    cout<<"\n did you want again? \t (y,n) \n";
   cin>>did;
   } while (did=='y');   cout<<"bye";
   
    break;


case  '/':
   do
   {
    /* code */
    set();
    cout<<"*******************************************\n";
    cout<<"the sum numbers is : "<<divi()<<endl;
    cout<<"*******************************************\n";
    cout<<"\n did you want again? \t (y,n) \n";
   cin>>did;
   } while (did=='y');   cout<<"bye";
   
    break;

default:
    break;
}


}
Controller::~Controller()
{

}


