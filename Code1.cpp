#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void printSubsequences(string str)
{
    int n = str.length();
    unsigned int opsize = pow(2, n - 1);
 
    for (int counter = 0; counter < opsize; counter++) {
        for (int j = 0; j < n; j++) {
 
            cout << str[j];
            if (counter & (1 << j))
                cout << " ";
        }
        cout << endl;
    }
}
 
// Driver code
int main()
{
    string str = "ABCD";
    printSubsequences(str);
    return 0;
}