#include "Goldbach.h"
#include <vector>
#include <iostream>
#include <math.h>

std::vector<int> Goldbach::GoldbachConjecture(int flag){

    //assume valid method has already been called and passed
    //so n is an even positive integer > 2

    //generate a vector of primes <= n/2
    std::vector<int> Primes, output;

    //add 2 to the vector
    Primes.push_back(2);

    //only need to consider odd numbers
    for(int y=3;y<=n/2;y=y+2){
        //check if y is prime, if so add to Primes
        if(IsPrime(y,Primes)){Primes.push_back(y);}
    }

    //check if n-k is prime for all k in Primes
    //must account for the case k=n/2
    for(int x=0;x<Primes.size();++x){

        if(n-Primes[x]==n/2){
            output.push_back(Primes[x]);
            if(flag==0){return output;}

        } else if(IsPrime(n-Primes[x],Primes)){
            output.push_back(Primes[x]);
            if(flag==0){return output;}
        }
    }

    return output;

}

bool IsPrime(int n, std::vector<int> &Primes){

    for(int x=0;x<Primes.size();++x){

            //we have found a divisor
            if(n%Primes[x]==0){
                return false;
            }
            //we are out of range now for a prime divisor
            if(Primes[x]>sqrt(n)+1){
                return true;
            }
    }
    return true;
}
