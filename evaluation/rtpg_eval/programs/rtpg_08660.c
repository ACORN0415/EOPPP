int __arr_8660[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 29;
    int v2 = 8;
    int v3 = 0;
    int v4 = 46;
    int v5 = 2;
    int v6 = 57;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 10; i++) { __arr_8660[i] = v1 + i; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    v2 = v2 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
