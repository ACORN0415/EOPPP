int __arr_2615[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 88;
    int v2 = 60;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_2615[i] = v2 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
