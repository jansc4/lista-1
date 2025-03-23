/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 */

#include "vector"
#include <stdexcept>
#include <map>

#ifndef LISTA_1_ZAD6_H
#define LISTA_1_ZAD6_H

using namespace std;

    /*
     * Protein class - contain information about DNA, mRNA and protein sequence
     * and methods to complement, transcribe and translate DNA.
     */

    class Protein {
        private:
            vector<char> DNA53;
            vector<char> DNA35;
            vector<char> mRNA;
            vector<char> proteinSequence;

        public:
            [[nodiscard]] const vector<char> &getDna53() const;

            void setDna53(const vector<char> &dna53);

            [[nodiscard]] const vector<char> &getDna35() const;

            void setDna35(const vector<char> &dna35);

            [[nodiscard]] const vector<char> &getMrna() const;

            void setMrna(const vector<char> &mRna);

            [[nodiscard]] const vector<char> &getProteinSequence() const;

            void setProteinSequence(const vector<char> &proteinSequence);


        public:
                //Constructor
                explicit Protein(vector<char> &DNA53);

                /*
                 *For the sequence of the DNA thread, it finds matrix sequence thread
                 * Take DNA53 and save result to DNA35
                 */
                void komplement();

                /*
                 *For the matrix sequence thread, it finds mRNA sequence thread
                 * Take DNA35 and save result to mRNA
                 */
                void transkrybuj();

                /*
                 * For the mRNA sequence thread, create protein sequence
                 * Take mRNA and save result to proteinSequence
                 */
                void transluj();


                /*
                 * Print vector<char> data
                 */
                static void printVector(const  vector<char> &data);

            };



#endif //LISTA_1_ZAD6_H
