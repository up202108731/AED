int FunWithComplexity::maxSubArray(const vector<int> & v) {
    unsigned n = v.size();
    int maxSoFar = v[0];
    int Max = v[0];
    for (unsigned i = 1; i < n; i++){
        if (maxSoFar < 0) {
            maxSoFar = v[i];
            if (maxSoFar > Max)
                Max = maxSoFar;
        }
        else{
            maxSoFar = maxSoFar + v[i];
            if (maxSoFar > Max)
                Max = maxSoFar;
        }
    }

    return Max;
}
