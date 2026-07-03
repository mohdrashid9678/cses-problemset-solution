#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int max_streak = 1;
    int current_streak = 1;

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current_streak++;
        } else {
            max_streak = max(max_streak, current_streak);
            current_streak = 1; // Reset for the new character
        }
    }
    
    // cases where the longest streak goes until the very end
    max_streak = max(max_streak, current_streak);

    cout << max_streak << "\n";

    return 0;
}
