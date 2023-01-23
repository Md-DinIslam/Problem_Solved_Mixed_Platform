#include <bits/stdc++.h>
using namespace std;
int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  int n;
  cin >> n;
  map<int, multiset<string>> marks_map;
  while (n--)
  // for (int i = 0; i < n; i++)
  {
    string name;
    int marks;
    cin >> name >> marks;
    marks_map[-1 * marks].insert(name);
  }
  /* Short Process */
  for (auto &stu_marks : marks_map)
  {
    auto &stu_name = stu_marks.second;

    auto &mark = stu_marks.first; /* int mark = stu_marks.first; */
    for (auto &i : stu_name)
      cout << i << " " << -1 * mark << endl;
  }
  /* Other Process..... */

  // auto cur_it = --marks_map.end();
  // while (true)
  // {
  //   auto &stud = cur_it->second;
  //   auto &mark = cur_it->first; //(*cur_it).first;
  //   for (auto &std : stud)
  //   {
  //     cout << std << " " << mark << endl;
  //   }
  //   if (cur_it == marks_map.begin())
  //   {
  //     break;
  //   }
  //   cur_it--;
  // }
  return 0;
}