# Libft
My own built C library.

Until now it is the sum of the libft, get_next_line and ft_printf projects.

Libft Project:
	Recode some basic functions of the Standard C Library + some fundamental basic functions (e.g. putstr, putnbr) + some function to work with a list.

GetNextLine Project:
	This function reads characters from the given file descriptor until the file ends or that one newLine is encountered, then saves the line in the string pointer given.
	If there are some errors the function returns -1, if the file is ended returns 0, returns 1 otherwise.

Printf Project:
	ft_printf does not exactly work as the true printf, check the following points to know which things are implemented:

	- supports s,S,p,d,D,i,o,O,u,U,x,X,c,C,n,% type;

	- works with the #0-+ flags;

	- has the right behaviour when the width is given (and can be obtained even with the '*' option);

	- has the right behaviour when the precision is given (and can be obtained even with the '*' option);

	- works with the hh,h,ll,l,j,z lenght modifiers (be sure to give the proper variable or cast it in the appropiate size);



NOTES:
	1) GET_NEXT_LINE
		- the function works even without a terminating newLine.

		- calling the functions in the following loop enables to read and display all the file:
			while (get_next_line(fd, &str) > 0)
				ft_putstr(str);

		- this function works even when multiplous fd are used within the same program.


	2) FT_PRINTF
		My ft_printf check for format errors (undefined behaviours, flags/lenght modifiers not compatible with each other or with the given type, etc) before starting to print, if any error is detected nothing will be printed and -1 will be returned.