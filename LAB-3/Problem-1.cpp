#include <iostream>
#include <fstream>

using namespace std;

void main(){
    ifstream a;
    a.open("Numbers.txt"); 
    int x;
    while (!a.eof()){
        a >> x;
        cout << x << " ";
    }
    a.close();
}
/*problem set coming soon*/