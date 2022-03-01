#include<iostream>
using namespace std;

float sum(float a ,float b)                 //Function For Addition
{                  
    float c = a+b;
    return c;
}

float sub(float a ,float b)                 //Function For Substraction
{
    float c = a-b;
    return c;
}

float prod(float a ,float b)                //Function For Multiplication
{                  
    int c = a*b;
    return c;
}

float div(float a ,float b)                 //Function For Division
{                  
    float c = a/b;
    return c;
}

int main(){
    int i = 1;
    while(i>0)
{
    
cout << " \n\n " <<endl;
cout << " Enter The Number 1 : ";
float numa,numb;
char op,a;


{
cin >> numa;

if (numa==a){                           //for if you entared a wrong key

cout << " \nopps You Entered Wrong Digit " <<endl;
break;
}

cout << "\n Enter the Operator : ";
cin >> op;

if (!(op=='+')&&!(op=='-')&&!(op=='*')&&!(op=='/')){                           //for if you entared a wrong key
cout << " \n opps You Entered Wrong Digit " <<endl;
break;}
}

cout << "\n Enter THe Number 2 : ";
cin >> numb;

if (numb==a){                          //for if you entared a wrong key

cout << " \nopps You Entered Wrong Digit " <<endl;
break;}

if (op=='+'){                        //If Operator is Addition
cout<< "\n\t"<<numa<<" + "<<numb<<" = "<<sum(numa ,numb);}


else if (op=='-'){                   //If Operator is Substraction
cout<< "\n\t"<<numa<<" - "<<numb<<" = "<<sub(numa ,numb);}


else if (op=='*'){                   //If Operator is Multiplication
cout<< "\n\t"<<numa<<" x "<<numb<<" = "<<prod(numa ,numb);}


else if (op=='/'){                   //If Operator is Division
cout<< "\n\t"<<numa<<" / "<<numb<<" = "<<div(numa ,numb);}

else {
    cout << "\n You Entered a wrong Operator" <<endl;
    
}


cout << "\n\nPress 1 to Continue : ";      //for Continue or break your Programe
int f;

cin>>f;

if(!(f==1))
break;
else if (f==a)
break;

}

return 0;
}