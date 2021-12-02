#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int changeNum(int num)
{
    int amount;
    int p = 1;
    int min = num;
    int place; //placement of min
    for(int i = 1 ; num/p > 0.01; i++)
    {
        p =pow(10,i);
        amount = i;
    }
        
        int r = 1;
        int a = 0;
        int numNum[amount];
        for (int i = amount; i > 0; i--)
        {
            r = pow(10,i-1);
            if (a>0) numNum[a] = (num / r) % 10;
            else numNum[a] = num / r;
            //cout << numNum[a] << endl;

        //mininum from numNum
        if(a==0) {
            min = numNum[a];
            place = a+1;
        }
        if(a>0 && numNum[a] < min) {
            min = numNum[a];
            place = a+1;
    }
    a++;
    }
    //cout << min << endl;
    //cout << place << endl;
    //amount++;
    return min;
    for(int i =place; i < amount; i++)
    {
        numNum[i-1] = numNum[i];
    }
    numNum[amount-1] = min;
    //for(int i =0; i < amount; i++)
    //{
        //cout << numNum[i];
    //}


}
int main()
{
    srand(time(NULL));
    int num[5];
    for (int i =0; i < 5 ; i++)
    {
    num[i] = rand()%(12+90000+1)+12;
    //cout << num [i] << endl;
    }
    int min[5];
    for (int i =0; i < 5 ; i++)
    {
    int number =  num[i];
    min[i] = changeNum(number);
    }

    int rez = min[0];
    for(int i = 1; i<5;i++)
    {
        if(min[i]< rez) rez = min[i];
    }
    cout << rez << endl;
}