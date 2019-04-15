/*************************************************************************
	> File Name: 40.Climb_Stairs.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月15日 星期一 16时17分41秒
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
const int MAXLEN=100;

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
    void showall()
    {
        for(int i=len-1;i>=0;i--)
        {
            cout<<num[i];
        }
        cout<<endl;
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
            if(sum.num[i]!=0) sum.len=i+1;    //this step can be improve
        }
        return sum;
    }
int main()
{
	int num;
	cin>>num;
    if(num==1)
    {
        cout<<"0"<<endl;
        return 0;
    }

    Bignum s0(0);
    Bignum s1(0);
    Bignum s2(1);
    Bignum s3(1);
    Bignum* ps0=&s0;
    Bignum* ps1=&s1;
    Bignum* ps2=&s2;
    Bignum* ps3=&s3;
    Bignum temp(0);
    Bignum* ptemp=&temp;
    
    for(int i=4;i<=num;i++)
	{
        ptemp =ps0;
        ps0=ps1;
        ps1=ps2;
        ps2=ps3;
        ps3=ptemp;
        *ps3=*ps0+*ps1;
	}
    ps3->showall();
	return 0;
 }
