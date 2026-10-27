int __arr_7067[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 53;
    int v2 = 22;
    int v3 = 81;
    int v4 = 31;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_7067[i] = v2 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
