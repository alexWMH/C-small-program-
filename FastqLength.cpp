#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main (int argc, char* argv[])  // char = input argv is character 
{
	ifstream in;
	in.open(argv[1]);
	// parameter 
	string id;
	string seq;
	string p;
	string quality;
	
	// read file (<IN>)
	while (getline(in,id)) {
		getline(in,seq);
		getline(in,p);
		getline(in,quality);
		cout << id << '\t' << seq.length() << endl;
	}
	return 0;
}


