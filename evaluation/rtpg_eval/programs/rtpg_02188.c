int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 91;
    int v2 = 71;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v1;
    }
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
