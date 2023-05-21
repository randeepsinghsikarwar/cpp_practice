#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
vector<int> parseInt(string str)
{
    vector<int> result;
    stringstream ss(str);
    int a = 0;
    char 
    while(ch == ','){
        ss>>a>>c;
        result.push_back(a);
        i++;
    }
    return result;

}

int main()
{
    string str;
    cin >> str;
    vector<int> integer = parseInt(str);
    for (int i = 0; i < integer.size(); i++)
    {
        cout << integer[i] << endl;
    }
}