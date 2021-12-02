#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int perestan(int num)
{
    int p = 1;
    int amount = 0;
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
            //cout << numNum[a];
            a++;
        }

        int first;
        
            if(numNum[0] != numNum[1] && numNum[1]!=0) 
            {
                first = numNum[1];
                numNum[1]=numNum[0];
                numNum[0] = first;
                return numNum[0]+numNum[1];
            }
            else
            {
                for(int i =2;i< amount;i++)
            {
                if(numNum[0] != numNum[i] && numNum[i]!=0)
                {
                first = numNum[i];
                numNum[i]=numNum[0];
                numNum[0] = first;
                return numNum[i] + numNum[0];
                }
            }
        }
}




int main()
{
    srand(time(NULL));
int num[3];
int sums[3];
for(int i = 0; i < 3; i++)
{
    num[i] = rand()%(120+9899+1)+120;
    cout << num[i] << endl;
}

int max = 0;
int nums = 0;
for(int i = 0; i < 3; i++)
{
    nums = num[i];
    sums[i] = perestan(nums);
    cout << sums[i] << endl;
    if(sums[i]>max) max = sums[i];
}

cout << max << endl;


}