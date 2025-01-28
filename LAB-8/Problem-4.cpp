#include <iostream>
#include <fstream>

using namespace std;
 
void main(){
    ifstream in;
    in.open("quiz_marks");
    ofstream out;
    out.open("total_marks");
    int x, y, z;
    
    while (!in.eof()){
        in >> x >> y >> z;
        out << x + y + z << endl;
    }

    in.close();
    out.close();
}
/*problem set coming soon*/