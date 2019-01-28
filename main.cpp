#include <iostream>
#include "Goldbach.cpp"
#include <vector>

using namespace std;

int main()
{
    int n, flag=0;
    vector<int> Primes;

    cout << "Please enter a positive even integer greater than 2." << endl;
    cin >> n;

    Goldbach Input(n);

    if(Input.valid()){
        cout << endl;
        cout << "Would you like to see all pairs of primes or a single pair?" << endl;
        cout << "Enter 0 to see only one pair of primes that sum to " << n << "." << endl;
        cout << "Enter 1 to see all pairs of primes that sum to " << n << "." << endl;
        cin >> flag;
        Primes = Input.GoldbachConjecture(flag);
        cout << endl;
        if(flag==0){
        cout << "A pair of primes that sum to " << n << " is:" << endl;
        } else {
        cout << "The pairs of primes that sum to " << n << " are:" << endl;
        }
        for(int y=0; y<Primes.size(); ++y){
            cout << "(" << Primes[y] << "," << n-Primes[y] << ")" << endl;
        }

    } else {

    cout << "Error. Invalid input. You did not enter a positive integer greater than 2." << endl;}

    return 0;
}
