#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int st = -1;
        int end = -1;
        int max = 1000000;
        int result = max;
        for (int i =0;i<n;i++)
        {
            if (a[i] == x) st =i;
            if (a[i]==y) end = i;
            if (st != -1 && end != -1){
                result = min(result,abs(st-end));
            }
        }
        if (result == max) return -1;
        return result;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
 