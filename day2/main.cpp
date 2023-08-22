#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v;
  // taking array as input
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    v.push_back(val);
  }

  // finding if such triplets exits
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size() - 2; ++i)
  {
    int l = i + 1;
    int r = v.size() - 1;

    while (l < r)
    {
      int total = v[i] + v[r] + v[l];
      if (total == 0)
      {
        cout << 1;
        return 0;
        l++;
        r--;
      }

      else if (total < 0)
        l++;
      else
        r--;
    }
  }

  cout << 0;
  return 0;
}