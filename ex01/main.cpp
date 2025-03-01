#include "iter.hpp"
#include <cctype>

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char a[] = {'A', 'b', 'c'};

	std::cout << "Original:" <<
	"\na[0]: " << a[0] <<
	"\na[1]: " << a[1] <<
	"\na[2]: " << a[2] <<
	std::endl << std::endl;

	::iter(a, sizeof(a) / sizeof(char), ft_tolower);

	std::cout << "To lower:" <<
	"\na[0]: " << a[0] <<
	"\na[1]: " << a[1] <<
	"\na[2]: " << a[2] <<
	std::endl << std::endl;

	::iter(a, 2, ft_toupper);

	std::cout << "To upper:" <<
	"\na[0]: " << a[0] <<
	"\na[1]: " << a[1] <<
	"\na[2]: " << a[2] <<
	std::endl << std::endl;
}
