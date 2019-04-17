/*************************************************************************
	> File Name: P1057_PassingGame.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月16日 星期二 15时41分26秒
 ************************************************************************/

#include<iostream>



#include<cstring>
using namespace std;
int const MAXLEN = 31;
int main()
{
    cout<<"111111"<<endl;
    int n,m;
    cin>>n>>m;
    int ans[31][31];
    //memset(ans,0,sizeof(ans));
    cout<<"222222"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans[i][j]=0;
        }
    }
    cout<<"333333"<<endl;
    for(int i=0;i<n;i++)
    {
        ans[i][1]=2;
    }
    cout<<"444444"<<endl;

    for(int j=2;j<m;j++)
    {
        ans[0][j]=ans[1][j-1]+ans[n-1][j-1];     //0 ~n-1   n个同学 
        for(int i=1;i<n-1;i++)
        {
            ans[i][j]=ans[i+1][j-1]+ans[i-1][j-1];
        }
        ans[n-1][j]=ans[0][j-1]+ans[n-2][j-1];
    }
    int ansans=ans[2][m-1]+ans[n-1][m-1];
    cout<<"ansans="<<ansans<<endl;

    cout<<"555555"<<endl;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //cout<<"i="<<i<<"  "<<"j="<<j<<" "<<endl;
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
