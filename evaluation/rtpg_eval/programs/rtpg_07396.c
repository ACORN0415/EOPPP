int __arr_7396[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 73;
    int v2 = 70;
    int v3 = 50;
    int v4 = 36;
    int v5 = 32;
    int i;
    v1 = v1 - v2;
    if (v1 > v4) { v1 = v4; }
    for (i = 0; i < 10; i++) { __arr_7396[i] = v4 + i; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
