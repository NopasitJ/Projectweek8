#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_bouncy(long long n);

int main() {
    long long count = 0;
    long long n = 1;
    while (true) {
        if (is_bouncy(n)) 
        {
           count++;
        }
        if (static_cast<double>(count) / n == 0.99) 
        {
            cout << n << endl;
            break;
        }
        ++n;
    }
}

bool is_bouncy(long long n) {
    string original = to_string(n);
    string sorted(original);
    sort(sorted.begin(), sorted.end());
    if (original == sorted) 
    {
        return false;
    }
    reverse(sorted.begin(), sorted.end());
    if (original == sorted) 
    {
        return false;
    }
    return true;
}