#ifndef RSHELL_ARRAY_H
#define RSHELL_ARRAY_H

#ifndef ARR_MAX_LEN
#define ARR_MAX_LEN 128
#endif // ARR_MAX_LEN

int init_arr(char ***,int); /* 为参数列表申请空间 */
int cls_arr(char ***,int,int *);  /* 释放空间 */

#endif // RSHELL_ARRAY_H