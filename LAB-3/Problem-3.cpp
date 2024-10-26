#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
 
void main(){
    ifstream in;
    in.open("input_file_2");
    ofstream out;
    out.open("output_file_2");
    int x;
    while (!in.eof()){
        in >> x;
        out << x << "\t" << pow(x,2) << "\t" << pow(x,3) << endl;
    }
    in.close();
    out.close();
}
/*problem set coming soon*/