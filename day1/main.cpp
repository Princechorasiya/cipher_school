#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n; // length of the array
  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    int val; // every array elements
    cin >> val;
    v.push_back(val);
  }

  int max_area = 0; // max possible area
  for (int i = 0; i < n; i++)
  {
    int area = 0;
    for (int j = i + 1; j < n; j++)
    {
      area = (j - i) * min(v[i], v[j]);

      if (area > max_area)
        max_area = area;
    }
  }

  cout << max_area;
}