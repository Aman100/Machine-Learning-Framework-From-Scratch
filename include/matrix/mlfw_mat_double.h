//Include Guard
#ifndef __MLFW__MAT__DOUBLE__
#define __MLFW__MAT__DOUBLE__
struct __mlfw_mat_double;
typedef struct __mlfw_mat_double mlfw_mat_double;

// Using dimension_t instead unsigned int to make consistency, as use can pass int, unsigned int or other datatypes too
mlfw_mat_double* mlfw_mat_double_create_new(dimension_t rows, dimension_t columns);
void mlfw_mat_double_destroy(mlfw_mat_double *matrix);
mlfw_mat_double* mlfw_mat_double_from_csv(const char *csv_file_name, mlfw_mat_double *matrix, mlfw_row_vec_string **header);
void mlfw_mat_double_get_dimensions(mlfw_mat_double *dataset,dimension_t *rows, dimension_t *columns);
void mlfw_mat_double_copy(mlfw_mat_double *target_matrix, mlfw_mat_double *source_matrix, dimension_t target_row_index, dimension_t target_column_index,dimension_t source_from_row_index, dimension_t source_column_index,dimension_t source_to_row_index,dimension_t source_to_column_index);
void mlfw_mat_double_fill(mlfw_mat_double *mat,dimension_t from_rows,dimension_t from_columns,dimension_t upto_rows, dimension_t upto_columns, double value);
mlfw_column_vec_double* mlfw_mat_double_create_column_vec(mlfw_mat_double *dataset, index_t index, mlfw_column_vec_double *cvec);
void mlfw_mat_double_set(mlfw_mat_double *matrix, dimension_t rows, dimension_t columns, double value);
double mlfw_mat_double_get(mlfw_mat_double *matrix, dimension_t rows, dimension_t columns);
mlfw_mat_double* mlfw_mat_double_shuffle(mlfw_mat_double *matrix, uint8_t shuffle_times, mlfw_mat_double* shuffled_matrix);
void mlfw_mat_double_to_csv(mlfw_mat_double *matrix, const char *csv_file_path, mlfw_row_vec_string *header);
mlfw_mat_double* mlfw_mat_double_transpose(mlfw_mat_double* matrix, mlfw_mat_double *transposed_matrix);
double mlfw_mat_double_get_min(mlfw_mat_double *matrix, dimension_t from_row_index, dimension_t from_column_index, dimension_t to_row_index, dimension_t to_column_index);
double mlfw_mat_double_get_max(mlfw_mat_double *matrix, dimension_t from_row_index, dimension_t from_column_index, dimension_t to_row_index, dimension_t to_column_index);
#endif