#include<iostream>
using namespace std;

int main()
{
    int a[5]={2,4,1,7,3};
    int i,temp, ptr;

    for(i=1; i<5; i++)
    {
        temp = a[i];
        ptr = i-1;
        while(temp<a[ptr] && ptr!=-1)
        {
            a[ptr+1] =a[ptr];
            ptr = ptr-1;
        }
        a[ptr+1] = temp;
    }
    for(i=0; i<5; i++)
    {
        cout<<a[i];
    }
}
