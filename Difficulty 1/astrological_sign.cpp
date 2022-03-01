#include <iostream>
#include <map>
#include <tuple>
using namespace std;

int main() {

    map<string, tuple<string, string, int>> mapping;
    mapping["January"] = make_tuple("Capricorn", "Aquarius", 20), mapping["February"] = make_tuple("Aquarius", "Pisces", 19), mapping["March"] = make_tuple("Pisces", "Aries", 20), mapping["April"] = make_tuple("Aries", "Taurus", 20), mapping["May"] = make_tuple("Taurus", "Gemini", 20), mapping["June"] = make_tuple("Gemini","Cancer", 21), mapping["July"] = make_tuple("Cancer", "Leo", 22), mapping["August"] = make_tuple("Leo", "Virgo", 22), mapping["September"] = make_tuple("Virgo", "Libra", 21), mapping["October"] = make_tuple("Libra", "Scorpio", 22), mapping["November"] = make_tuple("Scorpio", "Sagittarius", 22), mapping["December"] = make_tuple("Sagittarius", "Capricorn", 21);
    int t, day, split_month;
    string line, month;
    getline(cin, line);
    t = stoi(line);

    for(int i = 0; i < t; i++) {
        getline(cin, line);
        day = stoi(line.substr(0, line.find(' ')));
        month = line.substr(line.find(' ')+1);
        split_month = get<2>(mapping[month]);
        if (day > split_month) {
            cout << get<1>(mapping[month]) << endl;
        } else {
            cout << get<0>(mapping[month]) << endl;
        }
    }

}