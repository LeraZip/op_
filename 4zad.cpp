#include <iostream>
#include <iomanip>
using namespace std;
int NSD2chisel(int a, int b)
{
    int NSD = 1;
    int amountSD = 0;
    for(int i = 2; i < a && i < b; i++)
    {
        if(a%i==0 && b%i==0) 
        {
            NSD = i;
            amountSD++;
        }
    }
    return amountSD;
}
int main()
{
    srand(time(NULL));
    int nsd[4];
    int num11 = rand()%(2+10000+1)+2;
    int num12 = rand()%(2+10000+1)+2;
    nsd[0] = NSD2chisel(num11,num12);
    //cout << nsd[0] << endl;
    int num21 = rand()%(2+10000+1)+2;
    int num22 = rand()%(2+10000+1)+2;
    nsd[1] = NSD2chisel(num21,num22);
    //cout << nsd[1] << endl;
    int num31 = rand()%(2+10000+1)+2;
    int num32 = rand()%(2+10000+1)+2;
    nsd[2] = NSD2chisel(num31,num32);
    //cout << nsd[2] << endl;
    int num41 = rand()%(2+10000+1)+2;
    int num42 = rand()%(2+10000+1)+2;
    nsd[3] = NSD2chisel(num41,num42);
    //cout << nsd[3] << endl;
    int rez = nsd[0];
    for(int i =1; i< 4; i++)
    {
        if(nsd[i]> rez) rez = nsd[i];
    }
    cout << rez;

}