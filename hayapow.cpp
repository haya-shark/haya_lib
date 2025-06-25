
long long hayapow (long long a,unsigned long long b,long long mod){//a^b ≡ c (mod mod) calculate minimum c
    const long long detector = 1;
    long long result = 1;
    while(b!=0){
        if(detector & b){
            result *= a;
            result %= mod;
        }
        b = b >> 1;
        a = (a*a)%mod;
    }
    return result;
}
//testcode
#include<iostream>
int main (){
    std::cout<<hayapow(2,4,7) << std::endl;
    std::cout<<hayapow(2,3,17) << std::endl;
    std::cout<<hayapow(5,2,130) << std::endl;
    
}