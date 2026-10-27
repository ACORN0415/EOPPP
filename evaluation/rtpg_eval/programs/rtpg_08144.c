int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 89;
    int v2 = 1;
    int v3 = 34;
    int i;
    v1 = v1 + v3;
    v1 = v1 | v2;
    int *__p = &v2;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
