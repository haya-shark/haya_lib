template <typename T, typename U>
struct haya_pair
{
    T id;
    U value;
    haya_pair(T id_in, U value_in)
    {
        id = id_in;
        value = value_in;
    }
    haya_pair operator+(const haya_pair &a)
    {
        return haya_pair(id, value + a.value);
    }
    haya_pair operator+(const U &a)
    {
        return haya_pair(id, value + a);
    }
    haya_pair operator-(const haya_pair &a)
    {
        return haya_pair(id, value - a.value);
    }
    haya_pair operator-(const U &a)
    {
        return haya_pair(id, value - a);
    }
    haya_pair operator*(const haya_pair &a)
    {
        return haya_pair(id, value * a.value);
    }
    haya_pair operator*(const U &a)
    {
        return haya_pair(id, value * a);
    }
    haya_pair operator/(const haya_pair &a)
    {
        return haya_pair(id, value / a.value);
    }
    haya_pair operator/(const U &a)
    {
        return haya_pair(id, value / a);
    }
    haya_pair operator%(const haya_pair &a)
    {
        return haya_pair(id, value % a.value);
    }
    haya_pair operator%(const U &a)
    {
        return haya_pair(id, value % a);
    }
    haya_pair &operator=(const haya_pair &a)
    {
        if (this != &a)
        {
            this->id = a.id;
            this->value = a.value;
        }
        return *this;
    }
    bool &operator<(const haya_pair &a){
        return this->value < a.value;
    }
    bool &operator<(const U &a){
        return this->value < a;
    }
    bool &operator>(const haya_pair &a){
        return this->value > a.value;
    }
    bool &operator>(const U &a){
        return this->value > a;
    }
    
    bool &operator<=(const haya_pair &a){
        return this->value <= a.value;
    }
    bool &operator<=(const U &a){
        return this->value <=a;
    }
    bool &operator>=(const haya_pair &a){
        return this->value >= a.value;
    }
    bool &operator>=(const U &a){
        return this->value >=a;
    } 
    bool &operator==(const haya_pair &a){
        return this->value == a.value;
    }
    bool &operator== (const U &a){
        return this-> value == a;
    }
    bool &operator!= (const haya_pair &a){
        return this-> value != a.value;
    }
    bool &operator!=(const U &a){
        return this->value !=a;
    }
    bool full_equal(const haya_pair &a){
        return (this->id==a.id) and (this->value == a.value);
    }
};
