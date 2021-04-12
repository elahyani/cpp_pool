#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();

public:
    PresidentialPardonForm(std::string const & target);
    PresidentialPardonForm(const PresidentialPardonForm & src);
    PresidentialPardonForm& operator=(const PresidentialPardonForm & rhs);
    virtual ~PresidentialPardonForm();

    void    execute(Bureaucrat const & executor) const;
    void    takeAction(Bureaucrat const &) const;

};

#endif