int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 15;
    int v2 = 67;
    int v3 = 65;
    int v4 = 50;
    int v5 = 70;
    int i;
    v2 = v2 * 8;
    int *__p = &v0;
    *__p = *__p + 1;
    v5 = __arr_didx[__idx_didx[0]];
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
