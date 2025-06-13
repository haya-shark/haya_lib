template<typename T>
long long bs_bottom(long long left,long long right,T search,T (*f)(long long)){
    long long result,middle;
    if (f(left) > search){
        return -1;
    }
    if (f(right) < search){
        return -1;
    }
    if(f(left) == search){
        return left;
    }
    while(true){
        if (left+ 1 == right){
            if (f(right) == search){
                return right;
            }
            return -1;
        }
        middle = (left + right)/2;
        if (f(middle) >= search){
            right = middle;
        }else{
            left = middle;
        }
    }

}
template<typename T>
long long bs_top(long long left,long long right,T search,T (*f)(long long)){
    long long result,middle;
    if (f(left) > search){
       return -1;
    }
    if (f(right) < search){
        return -1;
    }
    if(f(right) == search){
        return right;
    }
    while(true){
        if (left+ 1 == right){
            if (f(left) == search){
                return left;
            }
            return -1;
        }
        middle = (left + right)/2;
        if (f(middle) <= search){
            left = middle;
        }else{
            right = middle;
        }
    }

}