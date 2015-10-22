//Name:Diego Medina
//Date:10-21-15
//Description:Programming Hw Oct 20
//            File IO A

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    ofstream fout2;
    ofstream fout3;
    
    string str;
    string firstCap;
    string upperAll;
    char ch;
    
    int charCount = 0;
    int wordCount = 0;
    
    int size1 = 0;
    int size2 = 0;
    int size3 = 0;
    int size4 = 0;
    int size5 = 0;
    int size6 = 0;
    int size7 = 0;
    int size8 = 0;
    int size9 = 0;
    int size10 = 0;
    int sizePlus = 0;
    
    double avgChars = 0;
    
    fin.open("gba.txt");
    fout.open("results.txt");
    fout2.open("capitalize.txt");
    fout3.open("uppercase.txt");
    
    if(fin.fail() || fout.fail() || fout2.fail() || fout3.fail() )
    {
        cout << "Error opening stream" << endl;
        exit(1);
    }
    
    while(fin >> str)
    {
        
        wordCount += 1;
        
        charCount += str.length();
        
        str[0] = toupper( str[0] );
        
        switch(str.length() )
        {
            case 1: size1++;
                    break;
                    
            case 2: size2++;
                    break;
                    
            case 3: size3++;
                    break;
                    
            case 4: size4++;
                    break;
                    
            case 5: size5++;
                    break;
                    
            case 6: size6++;
                    break;
                    
            case 7: size7++;
                    break;
                    
            case 8: size8++;
                    break;
                    
            case 9: size9++;
                    break;
                    
            case 10: size10++;
                    break;
                    
            default: sizePlus++;
                    break;    
        }//switch
        
        fout2 << str + " ";   
        
        for(int ix = 0; ix < str.length(); ix++)
        {
            str[ix] = toupper( str[ix] );
        }
        
        fout3 << str + " ";
    
    }
    
    avgChars = charCount / wordCount;
    
    fout << "Average characters per word: " << avgChars << endl << endl
         << size1 << "\t words of length 1" << endl    
         << size2 << "\t words of length 2" << endl    
         << size3 << "\t words of length 3" << endl    
         << size4 << "\t words of length 4" << endl    
         << size5 << "\t words of length 5" << endl   
         << size6 << "\t words of length 6" << endl    
         << size7 << "\t words of length 7" << endl    
         << size8 << "\t words of length 8" << endl    
         << size9 << "\t words of length 9" << endl    
         << size10 << "\t words of length 10" << endl 
         << sizePlus << "\t words of length 10++" << endl << endl
         << "Total number of words: " << wordCount << endl << endl;    


    fin.close();
    fout.close();
    fout2.close();
    fout3.close();

    return 0;
}
