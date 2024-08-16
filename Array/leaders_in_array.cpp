#include<iostream>
using namespace std;
#include<vector>
 
vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
          vector<int> ans;
        int mx = a[n-1];
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--){
          ans.push_back(mx);
            if(a[i]>=mx){
                mx = a[i];
            }
        }
        // reverse(ans.begin(),ans.end());
        return ans;
}

int main()
{
    return 0;
}