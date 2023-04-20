// #include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

// int main()
// {
//     vector<int> v = {5, 2, 55, 23};

//     //Method-1
//     sort(v.begin(), v.end());
//     for(int x : v)
//         cout << x << " ";
    
//     cout << endl;

//     //Method-2
//     sort(v.begin(), v.end(), greater<int>);
//     for(int x : v)
//     cout << x << " ";
// }

struct Point
{
    int x, y;
};
bool myComparision(Point p1, Point p2)
{
    return (p1.x < p2.x);
}
int main()
{
    Point arr[] = {{3,10}, {2,8}, {5,4}};
    sort(arr, arr+n, myComparision);
    for(auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
}
