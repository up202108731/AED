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
