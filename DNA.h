#ifndef DNA_H_INCLUDED
#define DNA_H_INCLUDED
#include "Sequence.h"
using namespace std;

enum DNA_Type{promoter, motif, tail, noncoding};
class DNA : public Sequence
{
    private:
        string DNAseq;
        int length;
    public:
        virtual void setSeq(string seq);
        virtual string getSeq();
        //virtual int getLen();
 	 	// constructors and destructor
        DNA(string);
        //DNA(string, int );
        virtual Sequence generateStrand();
        //Sequence(int length);
        DNA(DNA& rhs);        //right hand side
        void print();
        /*
  	private:
        DNA_Type type;
        DNA * complementary_strand;
        int startIndex;
        int endIndex;
    public:
 	 	// constructors and destructor
        DNA();
        DNA(char * seq, DNA_Type atype);
        DNA(DNA& rhs);
        ~DNA();
 	 	// function printing DNA sequence information to user
        void Print();
        // function to convert the DNA sequence to RNA sequence
        // It starts by building the complementary_strand of the current
        // DNA sequence (starting from the startIndex to the endIndex), then,
        // it builds the RNA corresponding to that complementary_strand.
        RNA ConvertToRNA();
 	 	// function to build the second strand/pair of DNA sequence
	    // To build a complementary_strand (starting from the startIndex to
        // the endIndex), convert each A to T, each T to A, each C to G, and
        // each G to C. Then reverse the resulting sequence.
        void BuildComplementaryStrand();*/
  };


#endif // DNA_H_INCLUDED
