/*************************************************************************
	> File Name: Wall_Coloring.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月15日 星期一 17时23分33秒
 ************************************************************************/


#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
const int MAXLEN=1000;

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

    Bignum operator*(Bignum a, Bignum b)
    {
        //cout<<"现在在进行乘法,ab分别为："<<endl;
        //a.showall();b.showall();
        Bignum sum;
        
        int count_times = 2*a.len>2*b.len?2*a.len:2*b.len;
        for(int i=0;i<b.len;i++)
        {
            for(int j=0;j<a.len;j++)
            {
                //cout<<"i="<<i<<" "<<"j="<<j<<endl;
                sum.num[i+j]+=b.num[i]*a.num[j];
            }
        }
        //cout<<"现在乘完了，接下来进行进位操作："<<endl;
        for(int i=0;i<MAXLEN;i++)
        {
            if(sum.num[i]>=10)
            {
                sum.num[i+1]+=sum.num[i]/10;
                sum.num[i]%=10;
            }
            if(sum.num[i]!=0) sum.len=i+1;
        }
        //cout<<"一次乘法结束，sum为： ";
        //sum.showall();
        return sum;
    }



int main()
{
	int temp_n,temp_k;
	cin>>temp_n>>temp_k;
    Bignum n(temp_n);
    Bignum k(temp_k);
    Bignum k_r_one(temp_k-1);
    Bignum k_r_two(temp_k-2);

    Bignum w0(temp_k);
    Bignum w1(temp_k*(temp_k-1));
    Bignum w2(temp_k*(temp_k-1)*(temp_k-2));
    
    Bignum* pw0=&w0;
    Bignum* pw1=&w1;
    Bignum* pw2=&w2;

    Bignum* ptemp=NULL;
	for(int i=3;i<=temp_n;i++)
	{
        ptemp=pw0;
        pw0=pw1;
        pw1=pw2;
        pw2=ptemp;
        *pw2=((k_r_two*(*pw1))+(k_r_one*(*pw0))); 
	}
    pw1->showall();
	return 0;
}
