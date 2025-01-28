#include <iostream>
#include <fstream>

using namespace std;
 
void main(){
    ifstream in;
    in.open("Numbers.txt");
    ofstream out;
    out.open("Factorials.txt");
    int x, temp;

    while (!in.eof()){
        in >> x;
        temp = x;

        while (temp != 1) {
            temp--;
            x *= temp;
        }

    out << x << endl;
    }
    
    in.close();
    out.close();
}
/*problem set coming soon*/