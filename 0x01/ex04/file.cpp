#include "file.hpp"

File::File(const std::string& iName)
: _inFile(iName), _outFile(iName + ".replace")
{

}

File::~File()
{
	_inFile.close();
	_outFile.close();
}

void File::replace(const std::string& s1, const std::string& s2)
{
	std::string line;

	if (!_inFile)
	    throw std::invalid_argument("file not open");
	while (std::getline(_inFile, line))
		_outFile << replaceLine(line, s1, s2) << std::endl;
}

std::string File::replaceLine(std::string line, const std::string &from, const std::string &to)
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
