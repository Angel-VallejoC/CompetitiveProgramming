#include <bits/stdc++.h>
using namespace std;
 
unordered_set<int> getPrimes(const int &n){
    vector<bool> primes(n+1, true);
    unordered_set<int> pset;
    for (int i = 4; i <= n; i+=2)
        primes[i] = false;
    for (int i = 3; i*i <= n; i+=2){
        if (primes[i]){
            for (int j = i*i; j <= n; j+=i)
                primes[j] = false;
        }
    }
      
    for(int i = 2; i <=  n; i++) {
        if (primes[i]){
            pset.insert(i);
        }
    }               
    return pset;
}
 
int main(){
   
    string s;
    unordered_set<int> primes = getPrimes(100000);
   
    while(cin >> s && s.compare("0") != 0  ){
        int max = -1;
        for (int i = 0; i < s.size(); i++){
            string t;
            for (int j = i; j < s.size(); j++){
                if (j >= i+6)
                    break;
                t += s[j];
                int aux = stoi(t);
                if (primes.count(aux) > 0 && aux > max)
                    max = aux;
            }
        }
       
        cout << max << '\n';
    }
   
    return 0;
}

