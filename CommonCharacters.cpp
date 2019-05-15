#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*Example 1:

Input: ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:

Input: ["cool","lock","cook"]
Output: ["c","o"]
*/
  
/*vector<string> commonChars(vector<string>& A) {
  vector<int> cnt(26, INT_MAX);
  vector<string> res;
  for (auto s : A) {
    vector<int> cnt1(26, 0);
    for (auto c : s) ++cnt1[c - 'a'];
    for (auto i = 0; i < 26; ++i) cnt[i] = min(cnt[i], cnt1[i]);
  }
  for (auto i = 0; i < 26; ++i)
    for (auto j = 0; j < cnt[i]; ++j) res.push_back(string(1, i + 'a'));
  return res;
}
*/
int main(){
cout<<"hello"<<endl;
  vector<string> In = {"cool","lock","cook"};
  
  for(string s : In)
  {
    cout<<s<<endl<<string(4,'a')<<endl<<string(2,'c')<<endl;
    
  }

}
