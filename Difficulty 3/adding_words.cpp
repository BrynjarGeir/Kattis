#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string command, var, line;
    int value, commands = 2000;
    map<string, int> variables;
    map<int, string> values;

    while(commands--) {
        getline(cin, line);
        istringstream iss(line);
        iss >> command;
        if(command == "clear") {
            variables.clear();
            values.clear();
        }
        else if(command == "def") {
            iss >> var >> value;
            variables[var] = value;
            values[value] = var;
        } else {
            int total_value = 0;
            bool unknown = false;
            iss >> var;
            if(variables.find(var) == variables.end()) {
                cout << line.substr(5) << " " << "unknown";
            } else {
                total_value = variables[var];
                while(iss >> command && command != "=") {
                    iss >> var;
                    if(variables.find(var) == variables.end()) {
                        unknown = true;
                        break;
                    }
                    if(command == "-") total_value -= variables[var];
                    else total_value += variables[var];
                }
                if(unknown) cout << line.substr(5) << " unkown";
                else {
                    if(values.find(total_value) == values.end()) cout << line.substr(5) << " unknown";
                    else {
                        cout << line.substr(5) << " " << values[total_value];
                    }
                }
            }
            if(commands != 0) cout << endl; 
        }
    }
}