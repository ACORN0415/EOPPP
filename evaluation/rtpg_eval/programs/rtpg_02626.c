int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 23;
    int v2 = 43;
    int v3 = 24;
    int v4 = 18;
    int v5 = 36;
    int i;
    v4 = 41;
    int *__p = &v4;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
