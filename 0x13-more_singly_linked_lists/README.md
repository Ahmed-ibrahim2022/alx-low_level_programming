# <span style="color: #ff5733">Singly Linked List Operations</span>

A collection of functions for performing operations on a singly linked list.

## Table of Contents

- [Description](#description)
- [Usage](#usage)
- [Functions](#functions)
- [Contributing](#contributing)
- [License](#license)

## Description

This project provides a set of functions for working with singly linked lists in C. It includes functions for tasks such as printing the list, adding nodes, deleting nodes, finding elements, and more.

## Usage

To use the functions in your C project, follow these steps:

1. Clone or download this repository.
2. Include the necessary header file in your code: `#include "lists.h"`.
3. Compile your code with the implementation file, for example: `gcc main.c print_listint.c -o my_program`.

## Functions

The following functions are provided in this project:

- `size_t print_listint(const listint_t *h);`
- `size_t listint_len(const listint_t *h);`
- `listint_t *add_nodeint(listint_t **head, const int n);`
- `listint_t *add_nodeint_end(listint_t **head, const int n);`
- `void free_listint(listint_t *head);`
- `void free_listint2(listint_t **head);`
- `int pop_listint(listint_t **head);`
- `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- `int sum_listint(listint_t *head);`
- `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- `listint_t *reverse_listint(listint_t **head);`
- `size_t print_listint_safe(const listint_t *head);`
- `size_t free_listint_safe(listint_t **h);`
- `listint_t *find_listint_loop(listint_t *head);`

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch for your changes.
3. Make your changes and commit them.
4. Push the changes to your fork.
5. Create a pull request to the main repository.

## License

This project is licensed under the [MIT License](LICENSE).
