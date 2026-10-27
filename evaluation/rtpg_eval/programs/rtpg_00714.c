int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 45;
    int v2 = 38;
    int i;
    v2 = 48;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
