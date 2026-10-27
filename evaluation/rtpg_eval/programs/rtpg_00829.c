int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 33;
    int v2 = 13;
    int v3 = 79;
    int v4 = 79;
    int v5 = 53;
    int v6 = 63;
    int v7 = 79;
    int i;
    if (v3 > v2) { v3 = v2; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
