int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 97;
    int v2 = 30;
    int v3 = 30;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v1;
    }
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }
