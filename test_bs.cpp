#include<iostream>
#include"binary_search.cpp"
typedef long long ll;
long long f (long long n){
    switch (n)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 1;
        break;
    case 3:
        return 3;
        break;
    case 4:
        return 3;
        break;
    case 5:
        return 3;
        break;
    case 6:
        return 4;
        break;
    case 7:
        return 5;
    default:
        break;
    }
    return 0;
}
int main (){
    std::cout << "1," << bs_bottom<ll>(1,7,1,f) << "," << bs_top<ll>(1,7,1,f) << std::endl;
    std::cout << "2," << bs_bottom<ll>(1,7,2,f) << "," << bs_top<ll>(1,7,2,f) << std::endl;
    std::cout << "3," << bs_bottom<ll>(1,7,3,f) << "," << bs_top<ll>(1,7,3,f) << std::endl;
    std::cout << "4," << bs_bottom<ll>(1,7,4,f) << "," << bs_top<ll>(1,7,4,f) << std::endl;
    std::cout << "5," << bs_bottom<ll>(1,7,5,f) << "," << bs_top<ll>(1,7,5,f) << std::endl;

}