*This project has been created as part of the 42 curriculum by eseragio.*

# Libft

## Description

<img align="right" src="https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExMnpkOHF4YTRlaW5rcHRob3I4dHdtdngwNWdubHludjQzczk2eTJ1ZiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/JaOzpza61yt1rHlP9a/giphy.gif" 
       alt="Piscine Duck" 
       style="width:400px; height:auto; border-radius:40px;"> 

**Libft** is the first project at 42 where you create your own C library by rebuilding key functions from scratch.  
The goal of this project is to deeply understand how standard C functions work internally while building a reusable static library for future projects.

This project significantly strengthened my knowledge in:

- Memory and pointer management
- String and array handling
- Function design and optimization
- Makefile compilation and static libraries
- Basic data structures (linked lists)

✅ **Project completed with 125% success** as part of my 42 journey.  
💻 **Language:** C

---

##  Project Overview (Mandatory & Bonus)

The project is structured into **two mandatory parts** and **one bonus part**.

---

## 🔹 Mandatory Part

### Part 1 – Libc Functions

Reimplementation of a set of standard C library (`libc`) functions.  
All functions strictly follow the original prototypes and behaviors, with the prefix `ft_`.

| Category | Description | Examples | External Functions |
|--------|------------|----------|-------------------|
| Character & String Functions | Character checks, string length, comparisons | `ft_isalpha`, `ft_strlen`, `ft_strncmp` | None |
| Memory Functions | Low-level memory manipulation | `ft_memset`, `ft_memcpy`, `ft_memmove` | None |
| Conversions | String to integer conversion | `ft_atoi` | None |
| Allocation | Dynamic memory allocation | `ft_calloc`, `ft_strdup` | `malloc` |

---

### Part 2 – Memory Allocation & String Utilities

Functions designed to allocate and manipulate memory dynamically using `malloc(3)`.

| Category | Description | Examples | External Functions |
|--------|------------|----------|-------------------|
| Substrings & Join | Create new strings from existing ones | `ft_substr`, `ft_strjoin` | `malloc` |
| String Split | Split a string by a delimiter | `ft_split` | `malloc`, `free` |
| String Trim | Remove characters from a set at the beginning and end | `ft_strtrim` | `malloc` |
| Integer Conversion | Convert integers to strings (handles negatives) | `ft_itoa` | `malloc` |

---

### Part 2 – Iteration & File Descriptor I/O

| Category | Description | Examples | External Functions |
|--------|------------|----------|-------------------|
| String Iteration | Apply functions to string characters | `ft_strmapi`, `ft_striteri` | `malloc` (for `ft_strmapi`) |
| File Descriptor Output | Write output to a specific fd | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | `write` |

---

## ⭐ Bonus Part – Linked Lists

Implementation of a linked list structure using:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

```
| Function Category | Purpose | Examples | External Functions Allowed |
|------------------|---------|----------|----------------------------|
| **Node Management** | Creating and destroying individual nodes or the entire list. The `t_list` structure uses `void *content` to store any type of data. | `ft_lstnew` (allocates and initializes a new node), `ft_lstdelone` (frees content using a function `del`, then frees the node itself), `ft_lstclear` (deletes the node and all successors). | `malloc`, `free` |
| **List Manipulation** | Adding, navigating, and measuring the list. | `ft_lstadd_front` (adds node at the beginning), `ft_lstlast` (returns the last node), `ft_lstadd_back` (adds node at the end), `ft_lstsize` (counts nodes). | None |
| **List Iteration / Mapping** | Applying a function to the content of list nodes. | `ft_lstiter` (applies function `f` to the content of each node), `ft_lstmap` (applies function `f` and creates a new list resulting from the applications). | `malloc`, `free` (for `ft_lstmap`) |

