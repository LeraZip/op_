#include <iostream>
using namespace std;
float sumAll = 0;
float bank(int amount, int years, int n)
{
    float sum= amount;
    for(int i = 0; i < years; i++)
    {
        sum += (n*sum)/100; 
    }
    sumAll +=sum;
    return sum;
}
int main()
{
    int amount1 = 1700;
    int years1 = 3;
    int n1 = 15; //percents
    bank(amount1,years1,n1);// otvet 2585,4875 a on daet 2585,49 
    //shuyali on okruglyaet?
    int amount2 = 3400;
    int years2 = 2;
    int n2 = 22; //percents
    bank(amount2,years2,n2);
    int amount3 = 2500;
    int years3 = 4;
    int n3 = 20; //percents
    bank(amount3,years3,n3);
    cout <<"Client will get: " << sumAll << endl;
    cout << "Client will earn: " << sumAll - amount1 - amount2 - amount3 << endl;


}