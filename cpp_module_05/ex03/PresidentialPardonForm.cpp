#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Def", 25, 5)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 25, 5)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    Form::operator=(rhs);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

void PresidentialPardonForm::takeAction(Bureaucrat const &b) const
{
    std::cout << "<" << b.getName() << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

    Form::execute(executor);
    this->takeAction(executor);
}