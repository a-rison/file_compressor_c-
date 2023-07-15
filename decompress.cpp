#include <iostream>
#include "huffman.hpp"
using namespace std;

void decompressFile(const string& inputFilePath,const string& outputFilePath){
    huffman f(inputFilePath, outputFilePath);
    f.decompress();
    cout << "Decompressed successfully" << endl;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}

    string inputFilePath(argv[1]);
    string outputFilePath(argv[2]);

    decompressFile(inputFilePath, outputFilePath);

    return 0;
}