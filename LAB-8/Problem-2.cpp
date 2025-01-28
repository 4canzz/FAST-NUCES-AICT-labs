#include <iostream>
#include <fstream>

using namespace std;
 
void main(){
    ifstream in;
    in.open("input_file_1");
    ofstream out;
    out.open("output_file_1");
    int x;

    while (!in.eof()){
        in >> x;
        out << x;
    }
    
    in.close();
    out.close();
}
/*problem set coming soon*/