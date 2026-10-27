int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 73;
    int v2 = 0;
    int v3 = 62;
    int v4 = 27;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    v0 = v0 + v2;
    v3 = v3 * 3;
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
