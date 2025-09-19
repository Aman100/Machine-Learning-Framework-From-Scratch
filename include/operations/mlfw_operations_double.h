#ifndef __MLFW_OPERATIONS__DOUBLE__
#define __MLFW_OPERATIONS__DOUBLE__

mlfw_column_vec_double* mlfw_multiply_double_matrix_with_column_vector(mlfw_mat_double *mat1, mlfw_column_vec_double *mat2, mlfw_column_vec_double *product_vector);
mlfw_column_vec_double*  mlfw_multiply_double_row_vector_with_column_vector(mlfw_row_vec_double* edt, mlfw_column_vec_double *ed, mlfw_column_vec_double *product_vector);
mlfw_column_vec_double* mlfw_subtract_double_column_vector(mlfw_column_vec_double *py, mlfw_column_vec_double *ay, mlfw_column_vec_double *difference_vector);
mlfw_column_vec_double* mlfw_multiply_double_scalar_with_column_vector(double scalar_value, mlfw_column_vec_double* vector, mlfw_column_vec_double *product_vector);
#endif