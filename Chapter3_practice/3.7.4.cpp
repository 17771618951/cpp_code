#include <iostream>
int main(){
    using namespace std;
    long sec;
    cout << "Enter the number of seconds:";
    cin >> sec;
    cout << sec << " seconds = " << sec/(60*60*24) << " days, " << sec%(60*60*24)/(60*60) 
    << " hours, " <<sec%(60*60*24)%(60*60)/60 << " minutes, " << sec%(60*60*24)%(60*60)%60<<" seconds ";
    return 0;
}