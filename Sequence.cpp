#include "Sequence.h"
Sequence::Sequence(string seq)
{
    this->length = seq.size();
    this->seq = seq;
}

Sequence::Sequence(string seq, int length)
{
    this->length = length;
    this->seq = seq;
}

void Sequence:: print()
{
    cout << seq << endl;
    cout << length << endl;
}

void Sequence::setSeq(string seq)
{
    this->seq = seq;
}

string Sequence::getSeq()
{
    return seq;
}

int Sequence::getLen()
{
    return length;
}

Sequence Sequence::generateStrand()
{
    Sequence s("",length);
    string seq_s;
    for(int i = 0 ; i < length; i++)
    {
        if(seq[i] == 'A')
        {
            seq_s += 'T';
        }
        else if(seq[i] == 'T')
        {
            seq_s += 'A';
        }
        else if(seq[i] == 'C')
        {
            seq_s += 'G';
        }
        else if(seq[i] == 'G')
        {
            seq_s += 'C';
        }
        else{
            seq_s += seq[i];
        }
    }
    int j=0;
    string seq_s2;
    for(int i=length-1;i>=0;i--)
    {
        seq_s2 += seq_s[i];
        j++;
    }
    s.setSeq(seq_s2);
    return s;


}


//RNA::RNA(string seq){}
