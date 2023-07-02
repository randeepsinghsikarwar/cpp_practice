#include <iostream>
#include <vector>

using namespace std;
extern vector<int> countingSort(vector<int> array, int max)
{
    vector<int> count(max + 1, 0);
    for (auto i : array)
    {
        count[i]++;
    }
    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }
    vector<int> sorted(array.size());
    for (int i = 0; i < sorted.size(); i++)
    {
        sorted[count[array[i]] -1 ] = array[i];
        count[array[i]] --;
    }
    return sorted;
}
int main()
{
    vector<int> arr = {4,3,5,1,7,2,8,1};

    vector<int> newSorted = countingSort(arr, 9);
    for(auto i : newSorted) {
        cout<<i<<" ";
    }
}