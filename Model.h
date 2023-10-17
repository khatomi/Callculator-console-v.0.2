#ifndef MODEL_H
#define MODEL_H

#pragma once
#include<iostream>
using namespace std;
class Model
{
public:
int num1;
int num2;
string choice;
char did;

 Model();

~Model();
int sum();
int min();
int divi();
int mult();
void set();

};

#endif