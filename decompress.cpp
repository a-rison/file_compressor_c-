#include<iostream>
#include"huffman.hpp"
using namespace std;

int main(int argc,int argv[]){
    if(argc!=3){
        cout << "Failed to detect files" << endl;
    }
    
    huffman f(argv[1], argv[2]);
    f.decompress;
    cout << "Decompressed successfully" << endl;

    return 0;
}