#include <iostream>
#include <vector>
using namespace std;

int calculate_partition(vector<int> numbers, int i) {
    int squares = 0, normals = 0;
    for(int j = 0; j <= i; j++) squares += numbers.at(j) * numbers.at(j);
    for(int j = i+1; j < numbers.size(); j++) normals += numbers.at(j);
    return squares * normals;
}

int main() {
    int max_value = 0, n, num;
    vector<int> numbers;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    for(int i = 0; i < n; i++) {
        int current_partition = calculate_partition(numbers, i);
        max_value = max(current_partition, max_value);
    }

    cout << max_value;
}