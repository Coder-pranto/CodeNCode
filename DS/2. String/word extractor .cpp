//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    
    string s = "quick brown fox jumps over the lazy dog.";
    istringstream portion(s);
    string word;
    while (portion >> word)
    {
        cout << word << el;
    }
    r0;
}