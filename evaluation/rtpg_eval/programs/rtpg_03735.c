int __arr_3735[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 76;
    int v2 = 95;
    int v3 = 80;
    int v4 = 82;
    int v5 = 36;
    int i;
    v4 = v4 + v2;
    v2 = v2 - v3;
    for (i = 0; i < 10; i++) { __arr_3735[i] = v4 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
