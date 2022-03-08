#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    string ABC;
    cin >> a >> b >> c;
    int min_number = 101, middle_number, max_number = 0;
    min_number = min(min_number, a);
    min_number = min(min_number, b);
    min_number = min(min_number, c);
    max_number = max(max_number, a);
    max_number = max(max_number, b);
    max_number = max(max_number, c);
    if((a == max_number || a == min_number) && (b == max_number || b == min_number)) middle_number = c;
    else if((a == max_number || a == min_number) && (c == max_number || c == min_number)) middle_number = b;
    else middle_number = a;
    
    cin >> ABC;
    for(char c: ABC) {
        if (c == 'A') cout << min_number << " ";
        else if(c == 'B') cout << middle_number << " ";
        else if(c == 'C') cout << max_number << " "; 
    }

}