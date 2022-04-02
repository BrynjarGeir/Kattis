#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n, command, value;

    while(cin >> n) {
        queue<int> q;
        priority_queue<int> pq;
        stack<int> st;
        bool isQ = true, isPQ = true, isSt = true;

        for(int i = 0; i < n; i++) {
            cin >> command >> value;

            switch (command)
            {
            case 1:
                if(isQ) q.push(value);

                if(isPQ) pq.push(value);

                if(isSt) st.push(value);

                break;
            
            case 2:
                if(isQ) {
                    if(q.empty() || q.front() != value) {
                        isQ = false;
                    } else q.pop();
                }

                if(isPQ) {
                    if(pq.empty() || pq.top() != value) {
                        isPQ = false;
                    } else pq.pop();
                }

                if(isSt) {
                    if(st.empty() || st.top() != value) {
                        isSt = false;
                    } else st.pop();
                }
                break;
            }
        }
        if(isQ && !isPQ && !isSt) cout << "queue" << endl;
        else if(!isQ && isPQ && !isSt) cout << "priority queue" << endl;
        else if(!isQ && !isPQ && isSt) cout << "stack" << endl;
        else if(!isQ && !isPQ && !isSt) cout << "impossible" << endl;
        else cout << "not sure" << endl;
    }
}