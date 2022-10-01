int FunWithCycles::winter(const vector<int> & v) {
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
