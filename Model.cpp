#include "Model.h"
#include<iostream>
#include<cmath>

Model::Model(){

}

Model::~Model()
{
/*hi  iam khatomi*/
}


int Model::sum(){return num1+num2;}
int Model::min(){return num1-num2;}
int Model::divi(){return num1/num2;}
int Model::mult(){return num1*num2;}
void Model::set(){
         cout<<"Enter number 1 :";
cin>>num1;
cout<<"Enter number 2 :";
cin>>num2;
}