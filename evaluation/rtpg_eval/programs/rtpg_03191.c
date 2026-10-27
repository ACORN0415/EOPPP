int __arr_3191[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 2;
    int v2 = 12;
    int v3 = 67;
    int v4 = 40;
    int v5 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_3191[i] = v4 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
