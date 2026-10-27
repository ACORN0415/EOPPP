int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 19;
    int v2 = 47;
    int v3 = 45;
    int v4 = 87;
    int v5 = 9;
    int i;
    v1 = v1 - v2;
    if (v4 > v1) { v4 = v1; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
