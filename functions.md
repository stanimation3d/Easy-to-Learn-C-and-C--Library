# 📚 Easy to Learn C/C++ Library - Function Guide

This document lists the natural-language function names used in the "Easy to Learn C/C++ Library" and their corresponding standard C library functions. Our goal is to enable programming learners to easily understand the function's purpose just by reading its name.

## 1. Basic Input/Output (I/O) and File Operations (`easy_io.h`)

| New Function Name | Standard C Equivalent | Description |
| :--- | :--- | :--- |
| `writing()` | `printf()` | Writes formatted text and variable values to the console. |
| `scanning()` | `scanf()` | Reads formatted input from the console and assigns it to variables. |
| `file_open()` | `fopen()` | Opens a file with the specified name and mode. |
| `file_close()` | `fclose()` | Closes an open file stream. |
| `file_writing()` | `fprintf()` | Writes formatted data to an open file. |
| `file_scanning()` | `fscanf()` | Reads formatted input from an open file. |
| `get_the_character()` | `getchar()` | Reads a single character from the standard input. |
| `put_the_character()` | `putchar()` | Writes a single character to the standard output. |

---

## 2. Mathematics and Memory Management (`easy_math.h`)

| New Function Name | Standard C Equivalent | Description |
| :--- | :--- | :--- |
| `exponentiation(base, exponent)` | `pow(base, exp)` | Calculates the power (exponent) of the base. |
| `absolute_value(value)` | `fabs(value)` | Returns the absolute value of the number. |
| `logarithm(value)` | `log(value)` | Calculates the natural logarithm (base $e$) of the number. |
| `random_number()` | `rand()` | Generates a random integer between 0 and `RAND_MAX`. |
| `memory_size(size_in_bytes)` | `malloc(size)` | Allocates a block of memory of the specified size. |

---

## 3. Time and Date (`easy_time.h`)

| New Function Name | Standard C Equivalent | Description |
| :--- | :--- | :--- |
| `get_current_time(ptr)` | `time(ptr)` | Gets the current calendar time in seconds. |
| `converting_time(ptr)` | `ctime(ptr)` | Converts a `time_t` value to a human-readable string. |
| `time_difference(end, start)` | `difftime(end, start)` | Calculates the difference between two times in seconds. |
| `local_time_info(ptr)` | `localtime(ptr)` | Breaks down the time into local time components (`struct tm`). |

---

## 4. Character Handling and Control (`easy_char.h`)

> **Note:** Functions ending with a question mark (`?`) check whether a condition is **True** or **False**.

| New Function Name | Standard C Equivalent | Description |
| :--- | :--- | :--- |
| `alphabetical_character?(char)` | `isalpha(char)` | Checks if the character is an alphabetic letter. |
| `number?(char)` | `isdigit(char)` | Checks if the character is a decimal digit (0-9). |
| `space?(char)` | `isspace(char)` | Checks if the character is a whitespace character (space, tab, newline, etc.). |
| `uppercase_letter?(char)` | `isupper(char)` | Checks if the character is an uppercase letter. |
| `lowercase_letter?(char)` | `islower(char)` | Checks if the character is a lowercase letter. |
| `capitalize(char)` | `toupper(char)` | Converts the character to uppercase. |
| `convert_to_lowercase(char)` | `tolower(char)` | Converts the character to lowercase. |

---

## 5. String Operations (`easy_string.h`)

| New Function Name | Standard C Equivalent | Description |
| :--- | :--- | :--- |
| `string_length(str)` | `strlen(str)` | Calculates the length of the string (excluding the null terminator). |
| `copy_string(dest, src)` | `strcpy(dest, src)` | Copies the source string to the destination string. |
| `join_strings(dest, src)` | `strcat(dest, src)` | Appends (joins) the source string to the end of the destination string. |
| `compare_strings(str1, str2)` | `strcmp(str1, str2)` | Compares the two strings lexicographically. |
| `find_character_in_string(str, char)` | `strchr(str, char)` | Finds the first occurrence of a specific character in the string. |
| `find_substring_in_string(haystack, needle)` | `strstr(haystack, needle)` | Finds the first occurrence of a specific substring in the string. |

---

## 6. Conditional Claim (Debugging) (`easy_claim.h`)

| New Function Name | Standard C Equivalent | Description |
| :--- | :--- | :--- |
| `to_claim_a_condition(condition)` | `assert(condition)` | Asserts that the condition is true. If false, it halts the program with an error message (in Debug mode). |