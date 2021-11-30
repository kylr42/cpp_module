//
// Created by Jimbo Siona on 11/30/21.
//

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"

class File {
public:
	explicit File(const std::string& iName);
	~File();

	void replace(const std::string& s1, const std::string& s2);
	static std::string replaceLine(std::string line, const std::string& from, const std::string& to);

private:
	std::ifstream _inFile;
	std::ofstream _outFile;
};

#endif //FILE_HPP
