#include <iostream>
#include <vector>
using namespace std;

void GeneratePermutations(vector<int> &combination, vector<bool> &used, int N, int K) {
    if ((int)combination.size() == K) {
        for (int i = 0; i < K; i++) {
            cout << combination[i];
            if (i < K - 1) cout << " ";
        }
        cout << "\n";
        return;
    }

    for (int num = 1; num <= N; num++) {
        if (!used[num]) {
            used[num] = true;
            combination.push_back(num);
            GeneratePermutations(combination, used, N, K);
            combination.pop_back();
            used[num] = false;
        }
    }
}

int main() {
    int N = 4;
    int K = 3;

    vector<int> combination;
    vector<bool> used(N + 1); 

    GeneratePermutations(combination, used, N, K);

    return 0;
}
