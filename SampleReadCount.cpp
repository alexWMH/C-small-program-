#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main (int argc, char* argv[]) 
{
	ifstream in;
	in.open(argv[1]);
	string first;
	string line;
	string field;
	vector<string> header;
	vector<double> sum;
	getline(in, first);
	//header
	stringstream ss(first);
	while (getline(ss, field, '\t')) {
		header.push_back(field);
		sum.push_back(0);
	} 

	// each otu
	while (getline(in, line)) {
		stringstream ss(line);
		vector<string> value;
		while (getline(ss, field, '\t')) {
			value.push_back(field);
		}
		
		for (int i = 1; i < header.size(); i++) {
			sum[i] += stof(value[i]);
		}
	}
	
	for (int i = 1; i < header.size(); i++){
		cout << header[i] << '\t' << sum[i] << '\n';
	}

	return 0;
}



