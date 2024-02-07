#include <bits/stdc++.h>
using namespace std;

class Term
{
    private:
        int coefficient;
        int exponent;
        friend class Polynomial;
};
class Polynomial
{
    private:
        int termCount;
        class Term *terms;
    public:
        Polynomial()
        {
            cout << "Number of terms?: ";
            cin >> termCount;
            terms = new Term[termCount];
        }
        Polynomial(int termCount)
        {
            this -> termCount = termCount;
            terms = new Term[this -> termCount];
        }
        void initialise()
        {
            for(int i = 0; i < termCount; i++)
            {
                cout << "Enter coefficient " << i + 1 << ": ";
                cin >> terms[i].coefficient;
                cout << "Enter exponent " << i + 1 << ": ";
                cin >> terms[i].exponent;
            }
        }
        void display()
        {
            for(int i = 0; i < termCount; i++)
            {
                cout << 
                terms[i].coefficient << "x^" << terms[i].exponent;
                if(i != termCount - 1) cout << " + ";
            }
            cout << endl;
        }
        int evaluate(int x)
        {
            int sum = 0;
            for(int i = 0; i < termCount; i++)
                sum += terms[i].coefficient * pow(x, terms[i].exponent);
            return sum;
        }
        Polynomial add(Polynomial p2)
        {
            Polynomial *sum = new Polynomial(termCount + p2.termCount);
            int i, j, k; i = j = k = 0;
            while(i < termCount && j < p2.termCount)
            {
                if(terms[i].exponent > p2.terms[j].exponent)
                    sum -> terms[k++] = terms[i++];
                else if(terms[i].exponent < p2.terms[j].exponent)
                    sum -> terms[k++] = p2.terms[j++];
                else
                {
                    sum -> terms[k].exponent = terms[i].exponent;
                    sum -> terms[k++].coefficient = terms[i++].coefficient + p2.terms[j++].coefficient;
                }
            }
            for(;i < termCount; i++) sum -> terms[k++] = terms[i++];
            for(;j < termCount; j++) sum -> terms[k++] = p2.terms[j++];
            sum -> termCount = k;
            return *sum;
        }
        ~Polynomial()
        {
            delete [] terms;
        }
};

int main()
{
    Polynomial p1; p1.initialise();
    Polynomial p2; p2.initialise();
    p1.display();
    p2.display();
    //cout << endl << p1.evaluate(5);
    Polynomial sum = p1.add(p2);
    sum.display();

    p1.~Polynomial();
    p2.~Polynomial();
    sum.~Polynomial();
}