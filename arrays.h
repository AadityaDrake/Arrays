#ifndef arrays_h
#define arrays_h

#define TRUE 1
#define FALSE 0

/*
  1d Arrays
*/
/* Story 1 */
void print_1d_array(float a[], int length);
/* Story 2 */
void read_1d_array(float a[], int length);
/* Story 3 */
void save_1d_array(char *filename, float a[], int length);
void load_1d_array(char *filename, float a[], int *length);
/* Story 4 */
void insert_1d_array(float new_value, int position,
                     float a[], int *length);
/* Story 5 */
void delete_1d_array(int position, float a[], int *length);

/*
   Sorting
*/
/* Story 9 */
void bubble_sort(float a[], int length);
/* Story 10 */
void selection_sort(float a[], int length);
/* Story 11 */
void insertion_sort(float a[], int length);
/* Story 14 */
void merge_sort (float a[], int low, int high);
void merge (float a[], int low, int mid, int high);
/* Story 15 */
void quick_sort(float a[], int low, int high);
void shell_sort(float a[], int length);
void bucket_sort(float a[], int length);
void heap_sort(float a[], int length);
/*
   Searching
*/
/* Story 12 */
void linear_search(float target, float a[], int length);
/* Story 13 */
void binary_search(float target, float a[], int length);

/*
  2d Arrays
*/
/* Story 6 */
void print_2d_array(float a[80][80], int columns, int rows);
/* Story 7 */
void read_2d_array(float a[80][80], int  columns, int rows);
/* Story 8 */
void multiply(float A[80][80], int Arow,
              float B[80][80], int Bcol,
              float C[80][80], int AcolBrow);
#endif
