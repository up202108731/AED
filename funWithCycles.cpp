#include "funWithCycles.h"
#include <iostream>
#include <string>
#include <algorithm>

bool FunWithCycles::palindrome(const std::string & s) {
    unsigned length = s.size();
    for (unsigned i = 0; i < length/2; i++) {
        if (s[i] != s[length - i - 1])
            return false;
    }
    return true;
}

// ----------------------------------------------------------
// Exercicio 2: Frases Palindromo
// ----------------------------------------------------------
// TODO

using namespace std;


bool FunWithCycles::palindromeSentence(const std::string & s) {
    int i,k;
    std::string new_string = "";
    for(i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            new_string += s[i];
        }
    }
    for(k=0; k<new_string.size(); k++){
        new_string[k] = tolower(new_string[k]);
    }
    if(palindrome(new_string) == true){
        return true;
    }
    return false;
}


// ----------------------------------------------------------
// Exercicio 3: Numeros Interessantes
// ----------------------------------------------------------
// TODO
int FunWithCycles::nextInterestingNumber(int n, int sum) {
    while (true){
        n++;
        if (digitSum(n) == sum) return n;
    }
}

int FunWithCycles::digitSum(int n) {
    int sum = 0;
    while (n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

// ----------------------------------------------------------
// Exercicio 4: O Inverno esta a chegar
// ----------------------------------------------------------
// TODO
int FunWithCycles::winter(const vector<int> & v) {
    int total = 0;
    int sum = 0;
    int i = 0;
    while (i < v.size() - 1){
        if ((v[i + 1] - v[i]) < 0 ) sum = sum + 1;
        else if ((v[i + 1] - v[i]) >= 0) sum = 0;

        if (sum > total) total = sum;
        i++;
    }
    return total;
}


// ----------------------------------------------------------
// Exercicio 5: Brincando com vectores
// ----------------------------------------------------------

// a) count
// TODO
int FunWithCycles::count(const vector<int> & v, int n) {
    int i = 0;
    int sum = 0;
    while(i < v.size()){
        if (v[i] == n) sum = sum + 1;
        i++;
    }
    return sum;
}

// b) hasDuplicates
// TODO
bool FunWithCycles::hasDuplicates(const vector<int> & v) {
    vector<int> newvector;
    for (auto i : v){
        for (auto j : newvector){
            if (i == j) return true;
        }
        newvector.push_back(i);
    }
    return false;
}

// c) removeDuplicates
// TODO
void FunWithCycles::removeDuplicates(vector<int> & v) {
    vector<int> newv;
    int flag = 0;
    for(auto i : v){
        flag = 0;
        for(auto f : newv){
            if (i == f) flag = 1;
        }
        if (flag == 0) newv.push_back(i);
    }
    v = newv;
}

// d) merge
// TODO
vector<int> FunWithCycles::merge(const vector<int> & v1, const vector<int> & v2) {
    vector<int> ans;
    for (int i = 0; i < v1.size(); i++)
    {
        ans.push_back(v1[i]);
    }

    for (int j = 0; j < v2.size(); j++)
    {
        ans.push_back(v2[j]);
    }

    sort(ans.begin(), ans.end());

    return ans;
}

// ----------------------------------------------------------
// Exercicio 6: Brincando com numeros primos
// ----------------------------------------------------------

// a) isPrime
// TODO
bool FunWithCycles::isPrime(int n) {
    int i;
    for( i = 2; i < n; i++){
        if ( n % i == 0) return false;
    }
    return true;
}

// b) factorize
// TODO
vector<int> FunWithCycles::factorize(int n) {
    vector<int> ans;
    int i = 2;
    while( i <= n){
        if ( i == n){
            ans.push_back(i);
            return ans;
        }
        if ( n % i == 0){
            ans.push_back(i);
            n = n / i;
            i = 2;
        }
        else i++;
    }
    return ans;
}

// c) listPrimes
// TODO
vector<int> FunWithCycles::listPrimes(int n) {
    vector<int> sieve;
    vector<int> primes;

    for (int i = 1; i < n + 1; ++i)
        sieve.push_back(i);
    sieve[0]=0;
    for (int i = 2; i < n + 1; ++i) {
        if (sieve[i-1] != 0) {
            primes.push_back(sieve[i-1]);
            for (int j = 2 * sieve[i-1]; j < n + 1; j += sieve[i-1]) {
                sieve[j-1] = 0;
            }
        }
    }
    return primes;
}


// ----------------------------------------------------------
// Exercicio 7: Numeros interessantes (versao desafio)
// ----------------------------------------------------------
// TODO
long long FunWithCycles::fastNextInterestingNumber(long long n, int sum) {
    return 0;
}
