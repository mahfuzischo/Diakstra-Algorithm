#include <bits/stdc++.h>
using namespace std;
double getMean(double num[], int n)
{
    double sum = 0;
    for(int i=0; i<n; i++)
        sum+=num[i];
    double mean=sum/n;
    return mean;
}
double getMedian(double num[], int n)
{

    sort(num, num + n);
    if(n % 2 == 0)
        return (num[n/2 - 1] + num[n/2])/2;
    return num[n/2];
}
double getMode( double num[], int n)
{
    sort(num, num + n);
    float max_count = 1, res = num[0], c = 1;

    for (int i = 1; i < n; i++)
    {
        if (num[i] == num[i - 1])
            c++;
        else
        {
            if (c > max_count)
            {
                max_count = c;
                res = num[i - 1];
            }
            c = 1;
        }
    }
    if (c > max_count)
    {
        max_count = c;
        res = num[n - 1];
    }
    return res;
}
int main()
{
    int n;
    double sum=0.0;
    double num[]= {3.4, 4.8, 8.4, 9.6, 2.3, 9.6, 5.6, 9.6, 4.8, 2.2};
    n=sizeof(num) / sizeof(num)[0];

    cout<<"\nMean = "<<getMean(num, n);
    cout<<"\nMedian = "<<getMedian(num, n);
    cout<<"\nMode = "<<getMode(num, n);

    return 0;
}
