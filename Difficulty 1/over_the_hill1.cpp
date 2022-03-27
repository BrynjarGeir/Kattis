#include <iostream>
#include <vector>
using namespace std;

vector<int> mmult(vector<vector<int>> matrix, vector<int> p) {
    vector<int> ans;
    for(auto r: matrix) {
        int a = 0;
        for(int i = 0; i < p.size(); i++) a += r.at(i) * p.at(i);
        a %= 37;
        ans.push_back(a);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n);
    for(int i = 0; i < n; i++) {
        matrix.at(i).resize(n);
        for(int j = 0; j < n; j++) {
            cin >> matrix.at(i).at(j);
        }
    }

    vector<vector<int>> numbers, result;

    cin.ignore();
    string message;
    getline(cin, message);

    vector<int> current;
    for(char c: message) {
        if(c == ' ') current.push_back(36);
        else {
            int i = c;
            if(i >= 65 && i <= 90) current.push_back(i - 'A');
            else current.push_back(i-4);
        }
        if(current.size() == n) {
            numbers.push_back(current);
            current.clear();
        }
    }

    if(!current.empty()) while(current.size() != n) current.push_back(36);

    if(current.size() == n) numbers.push_back(current);
    
    for(auto p: numbers) {
        vector<int> ans = mmult(matrix, p);
        result.push_back(ans);
    }
    
    for(auto p: result) {
        for(auto l: p) {
            if(l == 36) cout << ' ';
            else if(l >= 26) cout << l-26;
            else cout << (char)('A' + l);
        }
    }


}