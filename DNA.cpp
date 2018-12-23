#include "DNA.h"
#include "Sequence.h"

using namespace std;

DNA::DNA(string seq)
{
    this->seq = seq;
}

void DNA:: print()
{
    cout << seq << endl;
    cout << length << endl;
}

Sequence DNA::generateStrand(){}
