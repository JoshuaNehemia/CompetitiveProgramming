#include <iostream>
#include <vector>
using namespace std;

void GenerateCombinations(int start, vector<int> &combination, int N, int K) {
    if ((int)combination.size() == K) {
        for (int i = 0; i < K; i++) {
            cout << combination[i];
            if (i < K - 1) cout << " ";
        }
        cout << "\n";
        return;
    }
    for (int num = start; num <= N; num++) {
        combination.push_back(num);
        GenerateCombinations(num + 1, combination, N, K);
        combination.pop_back();
    }
}

int main() {
    int N,K;
    cin >> N >> K;
    vector<int> combination;
    GenerateCombinations(1, combination, N, K);

    return 0;
}