int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 99;
    int v2 = 9;
    int v3 = 57;
    int v4 = 85;
    int i;
    v4 = 38;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 + v1;
    v3 = __arr_didx[__idx_didx[0]];
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
