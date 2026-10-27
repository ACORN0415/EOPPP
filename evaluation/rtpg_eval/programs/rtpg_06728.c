int __arr_6728[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 38;
    int v2 = 29;
    int v3 = 37;
    int v4 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_6728[i] = v2 + i; }
    v2 = v2 + v0;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v3 = v3 & v2;
    return v0;
}
int main(void) { return test_func(); }
