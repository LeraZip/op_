#include <iostream>
#include <cmath>
#include <ctime>
#include<cstdlib>
using namespace std;
int minAmount;
int count = 0;
int numberChar(int num) // function to count amount of characters in number
{
    int p = 1;
    for(int i = 0; num/p >= 0,01; i++)
    {
        p = pow(10,i);
         if(num/p==0)
         {
             return i; // amount of characters in number
         }

    }
}

int proverNeparnist(int num)
{
    if(num % 2 !=0) return 1; 
    else return 0;
}

void doublikat(int num)
{
    int amount = numberChar(num)-1;
    int newNum;
    cout << "New number : ";
    for(int i =0; i <= amount; i++)
    {
        
        newNum = num / pow(10,amount-i);
        if(amount-i == 0) newNum = num;
        if(i>0) newNum = newNum % 10;
        
        cout << newNum;
        if(proverNeparnist(newNum) == 1)
        {
            amount++;
            i++;
            cout << newNum;
        } 
        
    }
    cout << endl;
    int newAm=amount+1;
    cout << "New amount of numbers: " << newAm << endl;

    
    if(count!=0)
    {
        if (newAm < minAmount)
        {
            minAmount= newAm;
        }
    }
    else minAmount = newAm;
    count++;

}


int main()
{
    srand(time(NULL));
    
    int num1 = rand()%(99999+122+1)-122;
    int num2 = rand()%(99999+122+1)-122;
    int num3 = rand()%(99999+122+1)-122;
    cout << num1 << endl;
    doublikat(num1);
    cout << num2 << endl;
    doublikat(num2);
    cout << num3 << endl;
    //cout << "amount of chars in number:  " << numberChar(num)<< endl;
    
    
    doublikat(num3);
    cout <<"The length of the smalest number is : " <<minAmount <<endl;
    //cout << endl;
    //cout << proverNeparnist(3) << endl;
}