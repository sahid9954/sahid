#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    

    

    for(auto i:s) {
        cout<<i<<" ";
    }
    
    return 0;
}