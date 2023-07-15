#include <iostream>
#include "huffman.hpp"
using namespace std;

void compressFile(const string& inputFilePath, const string& outputFilePath){
    huffman f(inputFilePath, outputFilePath);
    f.compress();
    cout << "Compressed successfully" << endl;
}


int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}
    
    string inputFilePath(argv[1]);
    string outputFilePath(argv[2]);

    compressFile(inputFilePath, outputFilePath);
    
    return 0;
}