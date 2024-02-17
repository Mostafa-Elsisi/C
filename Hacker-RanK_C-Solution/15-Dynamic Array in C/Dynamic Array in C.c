#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int *total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int **total_number_of_pages;

int main() {
  int total_number_of_shelves;
  scanf("%d", &total_number_of_shelves);

  int total_number_of_queries;
  scanf("%d", &total_number_of_queries);

  // Allocate memory for the total_number_of_books array
  total_number_of_books = (int *)malloc(total_number_of_shelves * sizeof(int));
  // Allocate memory for the total_number_of_pages array
  total_number_of_pages =
      (int **)malloc(total_number_of_shelves * sizeof(int *));

  for (int i = 0; i < total_number_of_shelves; i++) {
    *(total_number_of_books + i) =
        0; // Initialize total_number_of_books for each shelf to 0
    *(total_number_of_pages + i) =
        NULL; // Initialize total_number_of_pages for each shelf to NULL
  }

  while (total_number_of_queries--) {
    int type_of_query;
    scanf("%d", &type_of_query);

    if (type_of_query == 1) {
      // Insert a book with 'y' pages at the end of the 'x' shelf
      int x, y;
      scanf("%d %d", &x, &y);

      // Allocate memory for the new book
      total_number_of_pages[x] =
          (int *)realloc(total_number_of_pages[x],
                         (total_number_of_books[x] + 1) * sizeof(int));
      // Update total number of pages for the new book
      total_number_of_pages[x][total_number_of_books[x]] = y;
      // Increment total number of books for the 'x' shelf
      total_number_of_books[x]++;
    } else if (type_of_query == 2) {
      // Print the total number of pages of the 'y'-th book on the 'x'-th shelf
      int x, y;
      scanf("%d %d", &x, &y);
      printf("%d\n", total_number_of_pages[x][y]);
    } else {
      // Print the total number of books on the 'x'-th shelf
      int x;
      scanf("%d", &x);
      printf("%d\n", total_number_of_books[x]);
    }
  }

  // Free allocated memory
  if (total_number_of_books) {
    free(total_number_of_books);
  }

  for (int i = 0; i < total_number_of_shelves; i++) {
    if (total_number_of_pages[i]) {
      free(total_number_of_pages[i]);
    }
  }

  if (total_number_of_pages) {
    free(total_number_of_pages);
  }

  return 0;
}
