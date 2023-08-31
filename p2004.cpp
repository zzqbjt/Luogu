#include<iostream>
using namespace std;
int main()
{
    int N, M, C;
    cin>>N>>M>>C;
    int** a = new int* [N+1];
    long long ** sum = new long long *[N+1];
    for(int i = 1; i <= N; i++)
    {
        a[i] = new int [M+1];
        sum[i] = new long long [M+1];
        sum[i][0] = 0;
        for(int j = 1; j <= M; j++)
        {
            cin>>a[i][j];
            sum[i][j] = sum[i][j-1] + a[i][j];
        }
            
    }
    long long max = 0, ans;
    int maxX, maxY;
    for(int j = 1; j <= M-C+1; j++)
    {
        ans = 0;
        long long* b = new long long [N+1];
        long long* s = new long long [N+1];
        s[0] = 0;
        for(int i = 1; i <= N; i++)
        {
            b[i] = sum[i][j+C-1] - sum[i][j-1];
            s[i] = s[i-1] + b[i];
            if (i >= C)
                ans = s[i] - s[i-C];
            if (ans > max)
            {
                max = ans;
                maxX = i-C+1;
                maxY = j;
            }
        }        
    }
    cout<<maxX<<" "<<maxY;
    system("pause");
    return 0;
}