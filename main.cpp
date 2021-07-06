#include <iostream>
using namespace std;


void FindPrimeFactors(unsigned int num) {
    
    int pre = 0;
    while (num%2 == 0) {  
        if (pre != 2) cout<<"2 ";
        num = num/2; 
        pre = 2;
    }

    for (unsigned int i = 3; i*i <= num; i = i+2) {
        while (num%i == 0) {
            if(pre != i) cout<<i<<" ";
            num = num/i; 
            pre = i;
        }
    }
 
    if (num > 2) {
        if (pre != num) cout<<num<<" ";
        pre = num;
    }
}
 

int main() {

    unsigned int num;
    cin>>num; 
    cout<<"The primer factors of "<<num<<" are:"<<endl;
    FindPrimeFactors(num);
    return 0;
}