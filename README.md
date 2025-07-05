# ft_print_f

### Description:

Write a library that contains ft_printf(), a function that will mimic the original printf().

`int  ft_printf(const char *, ...);`

### Requirements:
- Do not implement the original printf()’s buffer management.
- Your function has to handle the following conversions: cspdiuxX%.
- Your implementation will be evaluated against the behavior of the original printf().
- You must use the command ar to create your library. The use of the libtool command is strictly forbidden.

### Learning process:

Key things learned from this project:

- Variadic functions.
- Handling return values and errors.
- Learn about printf's features/capabilities and the logic behind it.
- Makefiles (i.e., adding libft into the ft_printf Makefile).

This is a well functioning **ft_printf**, albeit slightly over-complicated. This is mostly due to my initial concern for properly handling error messages, especially those from the write function, which turned out to be more complicated than I had anticipated (or at least it seemed that way when I was coding it). It was nevertheless a good exercise to start dealing with more complex code, and improve skills related to handling return values and errors. It was also the first 42 project that involved variadic functions.

### Testing:

- My own test file.

- printfTester, fsoares. See [Francinette](https://github.com/WaRtr0/francinette-image).
