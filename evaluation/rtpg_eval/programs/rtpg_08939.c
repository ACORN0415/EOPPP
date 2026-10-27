int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 72;
    int v2 = 96;
    int v3 = 25;
    int v4 = 35;
    int v5 = 94;
    int i;
    v1 = v1 * 5;
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
