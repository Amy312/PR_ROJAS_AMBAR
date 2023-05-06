#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int N, vector<int> A){
    vector<int> result(N,0);
    int mx = -1;

    for(int i=0; i<A.size(); i++){
        if(A[i]>=1 && A[i]<=N){
            result[A[i]-1]++;
            mx = max(mx, result[A[i]-1]);
        }
        if(A[i]==N+1){
            for(int j=0; j<N; j++){
                result[j] = mx;
            }
        }
    }
    return result;
}



int main(){
    int N, M, value;
    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese la cantidad de valores para la matríz A: ";
    cin >> M;

    cout << "Ingrese los valores de la matriz" << endl;
    vector<int> matrix;
    for(int i=0; i<M; i++){
        cout << "A[" << i << "] = ";
        cin >> value;
        matrix.push_back(value);
    }

    vector<int> result = solution(N, matrix);
    cout << "[";
    for(int i=0; i<N-1; i++){
        cout << result[i] << ", ";
    }
    cout << result[N-1] << "]" << endl;

    
}