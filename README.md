*This project has been created as part of the 42 curriculum by ourhoutt*

# ft_printf

## Description
`ft_printf` is a re-implementation of the standard C `printf()` function. The goal of this project is to learn about **variadic functions** using `<stdarg.h>` and build a modular format-parsing library.

### Supported Conversions
* `%c` : Single character
* `%s` : String of characters
* `%p` : Pointer address printed in hexadecimal format (`0x...`)
* `%d` / `%i` : Signed decimal integer (base 10)
* `%u` : Unsigned decimal integer (base 10)
* `%x` : Unsigned hexadecimal integer (base 16, lowercase)
* `%X` : Unsigned hexadecimal integer (base 16, uppercase)
* `%%` : Literal percent sign

---

## Instructions

### Compilation
Build the static library `libftprintf.a` using `
```bash
make
```

### Makefile Rules
* `make` / `make all` : Compiles source files into `libftprintf.a`.
* `make clean` : Removes object files (`.o`).
* `make fclean` : Removes object files and `libftprintf.a`.
* `make re` : Rebuilds the library (`fclean` + `all`).


## Algorithm and Data Structures

### Data Structures
* **`va_list`**: Standard variadic macro structure from `<stdarg.h>` used to access unnamed function parameters dynamically.
* **No Heap Allocation**: Uses standard output `write(1, ...)` direct operations without dynamic buffer management (`malloc`).

### Key Algorithms & Logic
1. **Dispatcher Routing**: The main `ft_printf` function traverses the format string. When a `%` is encountered, it delegates specifier handling to a dispatcher function (`ft_check_specifier`) which extracts arguments using `va_arg`.
2. **Recursive Base Conversion**: Number conversion functions (`%d`, `%i`, `%u`, `%x`, `%X`, `%p`) use head recursion to handle digit printing from most-significant to least-significant without temporary heap string buffers.
3. **Error Propagation**: Return values of `write()` are monitored. If a write error occurs (`-1`), it is immediately propagated up through the recursive calls and dispatcher to return `-1` safely.

---

## Resources

### References
* `stdarg(3)` man page (`va_start`, `va_arg`, `va_end`)
* `write(2)` man page

### AI Usage Disclosure
## 📝 Acknowledgments & AI Usage

Following 42 AI guidelines, artificial intelligence was used solely as a pedagogical tool during this project:
- **Concepts & Debugging:** Helped clarify pointer traversal increments and `va_arg` type promotion rules.
- **Ownership:** 100% of the code, logic, and implementation were manually designed and written by ourhoutt.