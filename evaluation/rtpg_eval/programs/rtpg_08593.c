int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 3;
    int v2 = 77;
    int v3 = 36;
    int v4 = 35;
    int v5 = 95;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 - v4;
    v0 = v0 * 8;
    int *__p = &v2;
    *__p = *__p + 1;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
