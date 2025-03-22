/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 */

#include "string"


#ifndef LISTA_1_ZAD6_H
#define LISTA_1_ZAD6_H

namespace std {

    /*
     * Protein class - contain information about DNA, RNA and mRNA
     * and methods to complement, transcribe and translate DNA.
     */

    class Protein {
        private:
            string DNA;
            string RNA;
            string mRNA;

        public:
            //Constructor
            Protein(string DNA, string RNA = "", string mRNA = "");

            /*
             *
             */
            string komplement();

            /*
             *
             */
            string transkrybuj();

            /*
             *
             */
            string transluj();

            //Getters and Setters
            string getDNA();
            string getRNA();
            string getmRNA();

            void setDNA(string DNA);
            void setRNA(string RNA);
            void setmRNA(string mRNA);

        };

} // std

#endif //LISTA_1_ZAD6_H
