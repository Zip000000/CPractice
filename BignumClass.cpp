/*************************************************************************
	> File Name: Bignum.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月15日 星期一 09时27分02秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
const int MAXLEN=300;

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
    Bignum x(220011);
    Bignum y(335544);
    Bignum ans;
    ans = x+y;
    x.showall();
    y.showall();
    ans.showall();
}
