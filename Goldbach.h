#ifndef GOLDBACH_H_INCLUDED
#define GOLDBACH_H_INCLUDED

#include <vector>

class Goldbach{

private:
    int n;

public:
    Goldbach();
    Goldbach(int n1);
    ~Goldbach();

    //checks whether n is even and more than 2
    bool valid();

    //Returns a vector of primes whose complement is also prime
    //and whose sum with its complement adds up to n
    //if flag = 0, returns only one such prime
    //if flag != 0, returns all such primes
    std::vector<int> GoldbachConjecture(int flag);

    };

//helper functions

//Takes a positive integer n and a vector of primes <= sqrt(n) Primes
//Then checks whether n is prime or not
bool IsPrime(int n, std::vector<int> &Primes);

#endif // GOLDBACH_H_INCLUDED
