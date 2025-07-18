#include <iostream>
#include <fstream>

int main(int argc, char **argv){
	if (argc != 4){
		std::cerr << "Error" << std::endl;
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream inputFile(argv[1]);
	if(!inputFile){
		std::cerr << "Error: " << argv[1] << std::endl;
		return 1;
	}

	std::string filename = argv[1] + std::string(".replace");
	std::ofstream outputFile(filename.c_str());
	if(!outputFile){
		std::cerr << "Error: " << filename << std::endl;
		return 1;
	}

	std::string line;
	std::string result;
	size_t pos;
	size_t found;
	while(std::getline(inputFile, line)){
		pos = 0;
		while((found = line.find(s1, pos)) != std::string::npos){
			result += line.substr(pos, found - pos);
			result += s2;
			pos = found + s1.length();
		}
		result += line.substr(pos);
		if (!inputFile.eof())
			result += '\n';
	}

	inputFile.close();
	outputFile << result;
	outputFile.close();
	return 0;
}