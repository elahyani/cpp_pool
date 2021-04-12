#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Def", 145, 137)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("shrubbery creation", 145, 137)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    Form::operator=(rhs);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

void ShrubberyCreationForm::takeAction(Bureaucrat const &b) const
{
    std::ofstream os(b.getName() + "_shrubbery");

    if (os.fail())
    {
        std::cout << "Error: the file failed to open." << std::endl;
        os.clear();
    }

    os << "                                                        ." << std::endl;
    os << "                                          .         ;" << std::endl;
    os << "             .              .              ;%     ;;" << std::endl;
    os << "               ,           ,                :;%  %;" << std::endl;
    os << "                :         ;                   :;%;'     .," << std::endl;
    os << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
    os << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    os << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    os << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    os << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    os << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    os << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
    os << "                  `@%:.  :;%.         ;@@%;'" << std::endl;
    os << "                    `@%.  `;@%.      ;@@%;" << std::endl;
    os << "                      `@%%. `@%%    ;@@%;" << std::endl;
    os << "                        ;@%. :@%%  %@@%;" << std::endl;
    os << "                          %@bd%%%bd%%:;" << std::endl;
    os << "                            #@%%%%%:;;" << std::endl;
    os << "                            %@@%%%::;" << std::endl;
    os << "                            %@@@%(o);  . '" << std::endl;
    os << "                            %@@@o%;:(.,'" << std::endl;
    os << "                        `.. %@@@o%::;" << std::endl;
    os << "                           `)@@@o%::;" << std::endl;
    os << "                            %@@(o)::;" << std::endl;
    os << "                           .%@@@@%::;" << std::endl;
    os << "                           ;%@@@@%::;." << std::endl;
    os << "                          ;%@@@@%%:;;;." << std::endl;
    os << "                      ...;%@@@@@%%:;;;;,.." << std::endl;
    os << std::endl;
    os.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    this->takeAction(executor);
}