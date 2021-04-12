#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class   Bureaucrat
{

private:
	std::string	_name;
	int			_grade;
	Bureaucrat();

public:
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(const Bureaucrat & src);
	Bureaucrat&	operator=(const Bureaucrat & rhs);
	~Bureaucrat();

	std::string const & getName() const;
	int	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(){};
			~GradeTooHighException(){};
			virtual const char * what() const throw()
			{
				return "Grade too hi!";
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(){};
			~GradeTooLowException(){};
			virtual const char* what() const throw()
			{
				return "Grade too low!";
			}

	};
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat& b);

#endif