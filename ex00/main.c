/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:05:29 by cassem            #+#    #+#             */
/*   Updated: 2024/08/24 23:51:23 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // For memory allocation functions

void ft_putchar(char c);
void ft_putstr(int *str);
void ft_print_table(int ***table, int size);

int main(void)
{
    int size = 3; // Define the size of the table
    int i, j;     // Loop counters
    int ***table; // A pointer to a 3D array

    // 1. Allocate memory for the table using `malloc`
    table = (int ***)malloc(sizeof(int **) * 1);
    // Explanation: 
    // - We need a pointer to an array of 2D arrays, hence `int ***`.
    // - `sizeof(int **) * 1` allocates space for one pointer to a 2D array.
    // - `malloc` returns a void pointer which is cast to `int ***`.
    // - This is essentially creating an array of pointers to pointers to pointers, 
    //   which will point to our 2D grid.

    table[0] = (int **)malloc(sizeof(int *) * size);
    // Explanation:
    // - `table[0]` is a pointer to a 2D array (a pointer to an array of pointers).
    // - `sizeof(int *) * size` allocates memory for an array of `size` pointers to `int`.
    // - Each pointer will eventually point to a row of integers in the table.

    i = 0;
    while (i < size)
    {
        table[0][i] = (int *)malloc(sizeof(int) * size);
        // Explanation:
        // - `table[0][i]` is a pointer to a row of integers.
        // - `sizeof(int) * size` allocates memory for `size` integers, making up one row.
        // - This loop ensures that each row in the 2D array has enough space to hold `size` integers.

        j = 0;
        while (j < size)
        {
            table[0][i][j] = i * size + j; // Initialize with some values
            // Explanation:
            // - `table[0][i][j]` accesses the j-th element of the i-th row of the 2D array.
            // - We initialize each element with a simple calculation `i * size + j` for demonstration.
            j++;
        }
        i++;
    }

    // 2. Call the function to print the table
    ft_print_table(table, size);

    // 3. Free allocated memory using `free`
    i = 0;
    while (i < size)
    {
        free(table[0][i]);
        // Explanation:
        // - `free(table[0][i])` deallocates the memory allocated for the i-th row.
        // - This prevents memory leaks by ensuring that each allocated row is freed.

        i++;
    }

    free(table[0]);
    // Explanation:
    // - `free(table[0])` deallocates the memory allocated for the array of row pointers.
    // - This frees the memory that was used to store pointers to each row of integers.

    free(table);
    // Explanation:
    // - `free(table)` deallocates the memory allocated for the array of pointers to 2D arrays.
    // - This is the last step to ensure all allocated memory is properly freed.

    return 0;
}
