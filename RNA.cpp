#include "RNA.h"
#include "Sequence.h"
using namespace std;

void RNA::setSeq(string RNA_seq)
{
    this->RNA_seq = RNA_seq;
}

string RNA::getSeq()
{
    return RNA_seq;
}

/*RNA::RNA(string seq)
{
    for(int i = 0 ; i < seq.size() ; i++)
    {
        if(getSeq()[i] == 'T')
        {
            seq += 'U';
        }
        else
        {
            seq += getSeq()[i];
        }
    }
    cout<<RNA_seq;
}*/



