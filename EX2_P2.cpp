// ----------------------------------------------------------
// Exercicio 5: Analisando um rio
// ----------------------------------------------------------
// TODO
int FunWithComplexity::river(const vector<int> & v, int k, int t) {
    vector<int> prof ;
    int a = 0;
    int soma = 0;
    for (unsigned j = 0; j < k; j++){
        if (v[j] >= t ) a += 1;
        prof.push_back(v[j]);
    }
    if (k % 2 == 0) {
        if (a >= (k / 2)) soma += 1;
    }
    else {
        if (a >= (k / 2) + 1) soma +=1;
    }
    for (unsigned i = 0; i < (v.size() - k ); i++) {

        if (prof[i] >= t) a = a - 1;

        prof.push_back(v[i + k]);
        if (prof[(prof.size() - 1)] >= t) a = a + 1;

        if (k % 2 == 0) {
            if (a >= (k / 2)) soma += 1;
        }
        else {
            if (a >= (k / 2) + 1) soma += 1;
        }
    }
    return (soma);
}
