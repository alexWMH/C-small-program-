#include<iostream> 
#include<fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream in;
	in.open(argv[1]);
	string line;
	string field;
	vector<string> header;
	getline(in,line);
	stringstream ss(line);
	while(getline(ss,field,'\t')) {
		header.push_back(field);
	}
	for (int i = 0; i < header.size(); i++ ) {
		cout << i << '\t' <<header[i] << '\n';
	}
	return 0;
}

	
