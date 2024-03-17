#include <iostream>
int main(){
    using namespace std;
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << "minutes, " << seconds << " seconds = " << degrees + minutes / 60.0 + seconds / 3600.0<< degrees;
    return 0;
}