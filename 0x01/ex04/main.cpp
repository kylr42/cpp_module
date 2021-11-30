#include <iostream>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"

int ft_error(const std::string &file)
{
	std::cerr << RED << "Er.: Cannot open file: "
			  << file << "!" << std::endl << RESET;
	return (1);
}

std::string replaceLine(std::string line, const std::string& from, const std::string& to)
{
	size_t start_pos = 0;
	while((start_pos = line.find(from, start_pos)) != std::string::npos)
	{
		line.erase(start_pos, from.length());
		line.insert(start_pos, to);
		start_pos += to.length();
	}
	return line;
}

int main()
{
	std::string line;
	std::string s1 = "=====";
	std::string s2 = "++++++++";

	const char* iName = "inputFile.txt";
	const char* oName = "outputFile.txt";

	std::ifstream iFile(iName);
	std::ofstream oFile(oName);

	if (!iFile)
		return ft_error(iName);
	if (!oFile)
		return ft_error(oName);

	while (std::getline(iFile, line))
		oFile << replaceLine(line, s1, s2) << std::endl;

	iFile.close();
	oFile.close();
	return(0);
}