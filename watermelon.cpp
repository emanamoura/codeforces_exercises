// Watermelon question of Codeforces
#include <iostream>

using namespace std;

string canDivideWatermelon(int number) {
    if(number % 2 == 0 && number > 3){
        return "YES\n";
    }
    return "NO\n";
}

int main() {
    int number1;

    cin >> number1;
    cout << canDivideWatermelon(number1);
}
