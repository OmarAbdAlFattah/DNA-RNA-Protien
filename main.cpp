#include <iostream>
#include "Sequence.cpp"
#include "RNA.cpp"
using namespace std;

ostream& operator << (ostream& print, string secstrand)
{

    cout << secstrand;
    return print;
}

istream& operator >> (istream& get, string seq_in)
{
    cout << "Enter first strand of DNA: " << endl;
    get >> seq_in;
}

int main()
{
    string seq_in;
    string seq1;
    int length;

    cin >> seq_in;
    cout<<"length enter it: ";
    cin>>length;
    Sequence*n = new Sequence(seq1);
    Sequence s("", length) ; //s = n->generateStrand();
    cout << n->generateStrand().getSeq();
    //RNA rna(string rnaSide);

    //string rnaStrand = rna(seq1).getSeq();
    //rna(seq1).getSeq();
    //RNA* r = new RNA(s);

    /*cin>>seq_in;
    cin>>length;
    Sequence* n = new Sequence(seq1);
    Sequence* s = new Sequence(seq_in, length);
    n->print();
    s->print();*/
    return 0;
}
