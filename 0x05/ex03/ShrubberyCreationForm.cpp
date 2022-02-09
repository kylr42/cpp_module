//
// Created by Jimbo Siona on 12/9/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
		: AForm("ShrubberyCreationForm", 72, 45), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
		: AForm(src), _target(src.getTarget()) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

const std::string &ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	AForm::execute(executor);

	std::ofstream outfile(_target + "_shrubbery");
	if (!outfile)
	{
		std::cerr << "Er.: File open failed" << std::endl;
		return;
	}
	outfile << "       _____________,--,\n"
			   "      | | | | | | |/ .-.\\   HANG IN THERE\n"
			   "      |_|_|_|_|_|_/ /   `.      SANTA\n"
			   "       |_|__|__|_; |      \\\n"
			   "       |___|__|_/| |     .'`}\n"
			   "       |_|__|__/ | |   .'.'`\\\n"
			   "       |__|__|/  ; ;  / /    \\.-\"-.\n"
			   "       ||__|_;   \\ \\  ||    /`___. \\\n"
			   "       |_|___/\\  /;.`,\\\\   {_'___.;{}\n"
			   "       |__|_/ `;`__|`-.;|  |C` e e`\\\n"
			   "       |___`L  \\__|__|__|  | `'-o-' }\n"
			   "       ||___|\\__)___|__||__|\\   ^  /`\\\n"
			   "       |__|__|__|__|__|_{___}'.__.`\\_.'}\n"
			   "       ||___|__|__|__|__;\\_)-'`\\   {_.-;\n"
			   "       |__|__|__|__|__|/` (`\\__/     '-'\n"
			   "       |_|___|__|__/`      |                          .\n"
			   "-------|__|___|__/`         \\------jsiona-----     __/ \\__\n"
			   "-.__.-.|___|___;`            |.__.-.__.-.__.-.__   \\     /\n"
			   "  |     |     ||             |  |     |     |      /.'o'.\\\n"
			   "-' '---' '---' \\             /-' '---' '---' '--    .o.'.\n"
			   "     |     |    '.        .' |     |     |     |   .'.'o'.\n"
			   "'---' '---' '---' `-===-'`--' '---' '---' '---'  o'.o.'.o.\n"
			   "  |     |     |     |     |     |     |     |  .'.o.'.'.o.'.\n"
			   "-' '---' '---' '---' '---' '---' '---' '---' '--.o.'.o.'.o.'.\n"
			   "     |     |     |     |     |     |     |     |   [_____]\n"
			   "'---' '---' '---' '---' '---' '---' '---' '---'     \\___/";
	outfile.close();
}



