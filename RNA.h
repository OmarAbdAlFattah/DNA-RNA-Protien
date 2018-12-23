#ifndef RNA_H_INCLUDED
#define RNA_H_INCLUDED
#include "DNA.h"
using namespace std;
enum RNA_Type {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};

class RNA : public DNA
{
  	private:
        //RNA_Type type;
        string RNA_seq;
  	public:
 	 	RNA(string seq);
 	 	void setSeq(string seq);
 	 	string getSeq();
};

#endif // RNA_H_INCLUDED
//RNA(string seq, RNA_Type atype);
        //RNA(RNA& rhs);
//        DNA ConvertToDNA();
