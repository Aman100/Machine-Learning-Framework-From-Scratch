#ifndef __MLFW_DATA_ENCODER__
#define __MLFW_DATA_ENCODER__
void mlfw_encoder_encode_one_hot(char *source, char *target, uint32_t *encode_columns, int size, int header_exists);
#endif