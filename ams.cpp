#include <iostream>
using namespace std;

int main()
{
int num;
cout<<"Enter a no. : ";
cin>>num;
int n = num;
int sum = 0;
while(n !=0){
    int rem = n % 10;
    sum = sum + (rem*rem*rem);
    n = n/10;
}
if(sum==num){
    cout<<num<<" is an armstrong no."<<endl;
}
else{
    cout<<num<<" is not a armstrong no.";
}
    return 0;
}