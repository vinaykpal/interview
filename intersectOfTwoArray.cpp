#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> dict;
        vector<int> res;
        for(int i = 0; i < (int)nums1.size(); i++) dict[nums1[i]]++;
        for(int i = 0; i < (int)nums2.size(); i++)
            if(dict.find(nums2[i]) != dict.end() && --dict[nums2[i]] >= 0) res.push_back(nums2[i]);
        return res;
    }
    
int main () {
  vector<int> n1 = {1,2,2,4,3,2,2,2};
  vector<int> n2 = {2,2};
  
  vector<int> res = intersect(n1, n2);

  vector<int>::iterator it;
  for(it = res.begin(); it!=res.end(); ++it)
    cout<<"val: "<< *it<< endl;
  
return 0;
}
