#include <vector>
#include <iterator>
template <std::random_access_iterator I>
std::vector<int> z_algo(I first, I last)
{
    int size = last - first;
    std::vector<int> z_array(size, 0);

    z_array[0] = 0;
    int i = 1, j = 0;
    while (i < size)
    {
        while (i + j < size && *(first + j) == *(first + i + j))
            j++;
        z_array[i] = j;
        if (j == 0)
        {
            i++;
            continue;
        }
        int k = 1;
        while (k < j && k + z_array[k] < j)
        {
            z_array[i + k] = z_array[k];
            k++;
        }
        i += k;
        j -= k;
    }
    return z_array;
}