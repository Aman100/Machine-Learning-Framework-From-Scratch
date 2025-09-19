//Include Guard
#ifndef __MLFW__VEC__STRING__
#define __MLFW__VEC__STRING__
#include<stdio.h>
struct __mlfw_column_vec_string;
typedef struct __mlfw_column_vec_string mlfw_column_vec_string;

struct __mlfw_row_vec_string;
typedef struct __mlfw_row_vec_string mlfw_row_vec_string;

//Column vector functionalities
mlfw_column_vec_string* mlfw_column_vec_string_create_new(dimension_t size);
void mlfw_column_vec_string_destroy(mlfw_column_vec_string *vector);
mlfw_column_vec_string* mlfw_column_vec_string_from_csv(const char *csv_file_path, mlfw_column_vec_string *cvec, mlfw_row_vec_string **header);
void mlfw_column_vec_string_to_csv(mlfw_column_vec_string *vector, const char *csv_file_path, mlfw_row_vec_string *header);
void mlfw_column_vec_string_set(mlfw_column_vec_string *vector, index_t idx, char *string);
void mlfw_column_vec_string_get(mlfw_column_vec_string *vector, index_t idx, char **string);
void mlfw_column_vec_string_to_csv_header(mlfw_column_vec_string *header, dimension_t size, FILE *csv_file_path);
dimension_t mlfw_column_vec_string_get_size(mlfw_column_vec_string *vector);
mlfw_row_vec_string* mlfw_column_vec_string_transpose(mlfw_column_vec_string *vector, mlfw_row_vec_string *rvec);

//Row vector functionalities
mlfw_row_vec_string* mlfw_row_vec_string_create_new(dimension_t size);
void mlfw_row_vec_string_destroy(mlfw_row_vec_string *vector);
mlfw_row_vec_string* mlfw_row_vec_string_from_csv(const char *csv_file_path, mlfw_row_vec_string *rvec, mlfw_row_vec_string **header);
void mlfw_row_vec_string_to_csv_header(mlfw_row_vec_string *header, FILE *csv_file_path);
void mlfw_row_vec_string_to_csv(mlfw_row_vec_string *vector, const char *csv_file_path, mlfw_row_vec_string *header);
void mlfw_row_vec_string_set(mlfw_row_vec_string *vector, index_t idx, char *string);
void mlfw_row_vec_string_get(mlfw_row_vec_string *vector, index_t idx, char **string);
dimension_t mlfw_row_vec_string_get_size(mlfw_row_vec_string *vector);
mlfw_column_vec_string* mlfw_row_vec_string_transpose(mlfw_row_vec_string *vector, mlfw_column_vec_string *cvec);
#endif