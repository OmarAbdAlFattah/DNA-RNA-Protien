#ifndef SEQUENCE_H_INCLUDED
#define SEQUENCE_H_INCLUDED
using namespace std;
class Sequence
{
  	private:
        string seq;
        int length;
    public:
        virtual void setSeq(string seq);
        virtual string getSeq();
        virtual int getLen();
 	 	// constructors and destructor
        Sequence(string seq);
        Sequence(string seq, int length);
        Sequence generateStrand();
        //Sequence(int length);
        Sequence(Sequence& rhs);        //right hand side
        friend ostream& operator << (ostream& print, string strand);
        friend istream& operator >> (istream& get, string seq_in);
        void print();
};
#endif // SEQUENCE_H_INCLUDED
