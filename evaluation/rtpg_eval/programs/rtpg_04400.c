int __arr_4400[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 11;
    int v2 = 95;
    int v3 = 85;
    int i;
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) { __arr_4400[i] = v1 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
