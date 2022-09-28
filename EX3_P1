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
