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
