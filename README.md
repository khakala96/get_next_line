# Get_Next_Line
Program that reads a file line by line and displays the content of that file line by line.
## Usage
The program takes a file as parameter (prints: ret value 1 when something is read and displays the number of the line and the text after it also displays "Stdin end" at the end of the read)
````
>$ gcc -o getnextline main.c get_next_line.c libft/libft.a
>$ ./getnextline tests/Text.txt
````
### Output:
````
>$ ret value: 1 Line nr:1 Some more stuff to print
>$
>$ Stdin end
````
