#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int zvor(int num)
{
    int p =1;
    int z =1;
    int newNum;
    int check = 2; 
    int amount = 0;
    for(int i =0; check > 1; i++)
    {
        p = pow(10,i);
        z = pow(10,i+1);
        
        if (i> 0) newNum = (num/p)%p;
        else newNum = num%10;
        //cout << newNum;
        check= num/z;
        amount = i;
    }
    return amount+2;
}
int main()
{
    srand(time(NULL));
    int num1 = rand()%(100+99999+1)+100;
    //cout << num1 << endl;
    int amount1 = zvor(num1);
    //cout << amount1 << endl;
    int num2 = rand()%(100+99999+1)+100;
    //cout << num2 << endl;
    int amount2 = zvor(num2);
    int sum = amount1+amount2;
    cout << sum << endl;
}