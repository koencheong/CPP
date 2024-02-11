# Exceptions
```
virtual const char* what() const throw() { return "message" }
```
1. When designing a ```void FooFunc() throw(int,char)``` function, it should only 
throw integers and characters. On the other hand, an empty ```throw()``` is used to 
indicate that the function does not throw any exceptions.
	- ```noexcept``` is an improved version of throw(), which is deprecated in C++11. 

2. Is the virtual keyword necessary?
In C++ if you declare a method virtual in the base class then it's virtual also 
in derived class, even if the virtual keyword is omitted.
For documentation purposes is however nice to repeat it anyway.

https://stackoverflow.com/questions/22493294/what-is-the-meaning-of-this-header-virtual-const-char-what-const-throw
## Why use exceptions? 
Using exceptions for error handling makes your code simpler, cleaner, and less 
likely to miss errors. When using errno / if-statements, your error handling 
and your normal code are closely intertwined. That way, your code gets messy 
and it becomes hard to ensure that you have dealt with all errors.

# ```Const``` keyword
```
class C 
{
	public:
   	C();
	int foo () const;  // don't change the object it's applied to
	void bar (const std::string& s);  // don't change s
}
```

Below example is wrong bcuz **constant variable (const _name) cannot be initialized in constructor**.
```
Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->_name = name; **** CANNOT
	this->_grade = grade;
}
```

Have to use **Member Initializer List** to initialize!
```
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{ 
	...
}
```

# Insertion Operator (<<) Overloading
Allows you to use ```cout << Bureaucrat``` to display all the information without having
to write a print function like we normally do.
```
std::ostream& operator<<(std::ostream& output, const Bureaucrat& b)
{
	output << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (output);
}
```