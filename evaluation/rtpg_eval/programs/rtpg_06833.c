int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 82;
    int v2 = 49;
    int v3 = 36;
    int v4 = 22;
    int v5 = 77;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
