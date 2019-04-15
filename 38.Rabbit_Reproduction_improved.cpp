/*************************************************************************
	> File Name: 38.Rabbit_Reproduction.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月15日 星期一 14时40分46秒
 ************************************************************************/


#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;
const int MAXLEN=22 ;
class Bignum{
public:
    int num[MAXLEN];   //store number
    int len;  //current length
    Bignum()
    {
        memset(num,0,sizeof(num));  //initialize
        len = 0;
    }
    Bignum(int n)  //initialize a single number
    {
        memset(num,0,sizeof(num));  //initialize
        len = 0;
        int i=0;
        while(n!=0)
        {
            num[i]=n%10;
            n/=10;
            i++;
            len++;
        }
    }
    void clear()
    {
        memset(num,0,sizeof(num));
        len=0;
    }
    void showall()
    {
        if(len==0) cout<<"0"<<endl;
        else{
            for(int i=len-1;i>=0;i--)
            {
                cout<<num[i];
            }
            cout<<endl;
        }
    }
};
    Bignum operator+(Bignum a, Bignum b)
    {
        Bignum sum;
        int count_times = a.len>b.len?a.len:b.len;
        for(int i=0;i<count_times+1;i++)
        {
            sum.num[i]+=a.num[i]+b.num[i];
            if(sum.num[i]>=10)
            {
                sum.num[i]-=10;
                sum.num[i+1]++;
            }
            if(sum.num[i]!=0) sum.len=i+1;
        }
        return sum;
    }


int main()
{
	Bignum r1(0);
    Bignum r2(0);
    Bignum r3(1);
    Bignum* pr1=&r1;
    Bignum* pr2=&r2;
    Bignum* pr3=&r3;
    Bignum* ptemp=NULL;

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        ptemp=pr1;
        pr1=pr2;
        pr2=pr3;
        pr3=ptemp;
        pr3->clear();
        *pr3=*pr1+*pr2;
	}
    pr3->showall();
	return 0;
 } 
