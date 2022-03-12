#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n, c, num;

    while(scanf("%d", &n) != EOF) {
        if(n == 1 && cin >> c && c == 2) {
            cout << "impossible" << endl;
            continue;
        } else if(n == 1) {
            cout << "not sure";
            continue;
        }
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;
        bool could_be_stack = true, could_be_queue = true, could_be_pq = true;

        while(n--) {
            cin >> c >> num;
            if(c == 1) {
                st.push(num);
                q.push(num);
                pq.push(num); 
            } else {
                if(could_be_stack && st.top() != num) could_be_stack = false;
                if(could_be_queue && q.front() != num) could_be_queue = false;
                if(could_be_pq && pq.top() != num) could_be_pq = false;
                st.pop(), q.pop(), pq.pop();
            }
        }

        if(!could_be_pq && !could_be_queue && !could_be_stack) cout << "impossible";
        else if((could_be_pq && could_be_queue) || (could_be_queue && could_be_stack) || (could_be_pq && could_be_stack)) cout << "not sure";
        else if(could_be_pq) cout << "priority queue";
        else if(could_be_queue) cout << "queue";
        else if(could_be_stack) cout << "stack";

        cout << endl;

    }
}