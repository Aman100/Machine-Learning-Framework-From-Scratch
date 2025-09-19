//Include Guard
#ifndef __MLFW__VEC__DOUBLE__
#define __MLFW__VEC__DOUBLE__
struct __mlfw_column_vec_double;
struct __mlfw_row_vec_double;
typedef struct __mlfw_column_vec_double mlfw_column_vec_double;
typedef struct __mlfw_row_vec_double mlfw_row_vec_double;

//Row vector function prototypes
mlfw_row_vec_double* mlfw_row_vec_double_create_new(dimension_t size);
void mlfw_row_vec_double_destroy(mlfw_row_vec_double *matrix);
void mlfw_row_vec_double_set(mlfw_row_vec_double *matrix, dimension_t index, double value);
double mlfw_row_vec_double_get(mlfw_row_vec_double *matrix, dimension_t index);
mlfw_row_vec_double* mlfw_row_vec_double_create_new_filled(dimension_t size,double value, mlfw_row_vec_double *rvec);
mlfw_column_vec_double* mlfw_row_vec_double_transpose(mlfw_row_vec_double *mat, mlfw_column_vec_double *transposed_vector);
dimension_t mlfw_row_vec_double_get_size(mlfw_row_vec_double *vector);
double mlfw_row_vec_double_get_mean(mlfw_row_vec_double *actual_i);
void mlfw_row_vec_double_to_csv(mlfw_row_vec_double *vector, char *csv_file_name, mlfw_row_vec_string *header);
mlfw_row_vec_double* mlfw_row_vec_double_from_csv(char *csv_file_name, mlfw_row_vec_double *rvec, mlfw_row_vec_string **header);

//Column vector function prototypes
mlfw_column_vec_double* mlfw_column_vec_double_create_new(dimension_t size);
void mlfw_column_vec_double_destroy(mlfw_column_vec_double *matrix);
void mlfw_column_vec_double_set(mlfw_column_vec_double *matrix, index_t index, double value);
double mlfw_column_vec_double_get(mlfw_column_vec_double *matrix, dimension_t index);
mlfw_column_vec_double* mlfw_column_vec_double_create_new_filled(dimension_t size,double value, mlfw_column_vec_double *cvec);
mlfw_row_vec_double* mlfw_column_vec_double_transpose(mlfw_column_vec_double *mat, mlfw_row_vec_double *rvec);
dimension_t mlfw_column_vec_double_get_size(mlfw_column_vec_double *vector);
double mlfw_column_vec_double_get_mean(mlfw_column_vec_double *actual_i);
void mlfw_column_vec_double_to_csv(mlfw_column_vec_double *vector, char *csv_file_name, mlfw_row_vec_string *header);
mlfw_column_vec_double* mlfw_column_vec_double_from_csv(char *csv_file_name, mlfw_column_vec_double *cvec, mlfw_row_vec_string **header);
#endif