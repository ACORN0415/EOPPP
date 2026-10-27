int __arr_7948[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 36;
    int v2 = 71;
    int i;
    v2 = v2 * 7;
    for (i = 0; i < 10; i++) { __arr_7948[i] = v1 + i; }
    v1 = v1 - v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
