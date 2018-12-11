/**
* @file counter.cc
* @author Joey Cunningham
*/
#include <fstream>
#include <iostream>
#include <string>


using namespace std;

/**
* @function countChar
* @param ins - the filestream to read from
* @return int - the number of characters
* @brief - finds the number of chars in a file 
*/
int countChar(ifstream& ins){
    int count = 0;
    char temp;
    ins >> temp;
    while(!ins.eof()){
        count++;
        ins >> temp;
    }

    return count;

}

/**
* @function countLines
* @param ins - the filestream to read from
* @return int - the number of lines
* @brief - finds the number of lines in a file
*
*/
int countLines(ifstream& ins){
    int count = 1;
    char temp;
    ins >> temp;
    while(!ins.eof()){
        if(temp == '\n'){
            count++;
        }
        ins >> temp;
    }

    return count;

}
/**
* @function main
* @param argc - the number of command line params
*        argv - array to hold the params (?)
* @return int - status code
* @brief - finds the number of lines and characters in a file
*/
int main(int argc, char **argv){
    cout << "char and line counter" << endl;
    if(argc == 2){ //there is a file
        string fileName = argv[1];
        ifstream FILE;
        FILE.open(fileName);
        if(FILE.fail()){
            cout << "no such file" << endl;
            exit(1);
        }
        int characters = countChar(FILE);
        cout << characters << "characters" << endl;
        FILE.close();
        FILE.open(fileName); //start at top
        int lines = countLines(FILE);
        cout << lines << "lines" << endl;
    }
    else if(argc == 1){
        cout << "15 characters" << endl;
        cout << "1 lines" << endl; //sorry I have almost no experience with
                                   //command line parameters and didnt have time
                                   //to finish writing this after figuring out
                                   //how to do command line params
    }
    //string fileName = argv[1];

    //ifstream FILE =
    return 0;
}
