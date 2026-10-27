int __arr_3434[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 100;
    int v2 = 26;
    int v3 = 37;
    int v4 = 19;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_3434[i] = v1 + i; }
    v0 = 13;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
