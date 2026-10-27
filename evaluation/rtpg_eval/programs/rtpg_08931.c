int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 62;
    int v2 = 69;
    int v3 = 47;
    int v4 = 76;
    int v5 = 30;
    int i;
    if (v5 > v3) { v5 = v3; }
    v0 = v0 * 5;
    int *__p = &v4;
    *__p = *__p + 1;
    v5 = __arr_didx[__idx_didx[0]];
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
