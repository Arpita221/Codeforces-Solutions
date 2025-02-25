#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int n = s.size();
        int minJump = n; // Initialize minJump with maximum possible value
        
        // Iterate through possible values of K
        for (int k = 1; k <= n; ++k) {
            int jumps = 0;
            int curPos = 0; // Current position
            
            // Simulate the jumps
            while (curPos < n) {
                // Find the next jump position
                int nextPos = min(curPos + k, n - 1);
                while (s[nextPos] != 'X') {
                    if (s[nextPos] == 'R') nextPos++;
                    else nextPos--;
                }
                curPos = nextPos;
                jumps++;
            }
            
            // Update the minimum jump if needed
            minJump = min(minJump, jumps);
        }
        
        cout << minJump << endl;
    }
    
    return 0;
}
