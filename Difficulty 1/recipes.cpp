#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    int T, R, P, D, recipe_num = 1;
    double weight, percentage, scale_factor;
    string name;

    cin >> T;

    while(T--) {
        string main_ingr;
        int main_weight;
        vector<pair<string, double>> recipe;
        cin >> R >> P >> D;
        scale_factor = (double)D / P;
        for(int i = 0; i < R; i++) {
            cin >> name >> weight >> percentage;
            if(percentage == 100.0) main_weight = weight * scale_factor;
            recipe.push_back({name, percentage*0.01});
        }

        cout << "Recipe # " << recipe_num++ << endl;
        for(auto c: recipe) {
            cout << c.first << " " << c.second * main_weight << endl;
        }

        cout << "----------------------------------------" << endl;


    }
}