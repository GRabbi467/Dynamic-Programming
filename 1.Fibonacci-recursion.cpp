#include<iostream>

using namespace std;

int fibonacci(int n)
{
    if(n <= 1 )
        return n;

    return(fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
    int n,i=0;
    cin>>n;
    cout<<"\nFibonacci Series is as follows\n";

    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
    return 0;
}
