#include <iostream>
int main(){
    using namespace std;
    long long p;
    long long us;
    cout << "Enter the world's population: ";
    cin >> p;
    cout << "Enter the population of the US: ";
    cin >> us;
    cout << "The population of the US is " << double (us) / double (p) * 100 << "\% of the world population.";
    return 0;
}