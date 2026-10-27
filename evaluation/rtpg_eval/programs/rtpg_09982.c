int __arr_9982[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 16;
    int v2 = 78;
    int v3 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_9982[i] = v0 + i; }
    if (v2 > v1) { v2 = v1; }
    v0 = 17;
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
