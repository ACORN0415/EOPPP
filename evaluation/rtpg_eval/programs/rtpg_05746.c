int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 75;
    int v2 = 82;
    int i;
    v1 = v1 * 2;
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
