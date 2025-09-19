#ifndef __MLFW_SCALE__DOUBLE__
#define __MLFW_SCALE__DOUBLE__

mlfw_mat_double *mlfw_scale_double_min_max(mlfw_mat_double *matrix, index_t from_row_index, index_t from_column_index, index_t to_row_index, index_t to_column_index, char *min_max_file, mlfw_mat_double *scaled_matrix);
mlfw_mat_double *mlfw_scale_double_with_given_min_max(mlfw_mat_double *matrix, index_t from_row_index, index_t from_column_index, index_t to_row_index, index_t to_column_index, mlfw_mat_double *min_max_matrix, mlfw_mat_double*scaled_matrix);
#endif