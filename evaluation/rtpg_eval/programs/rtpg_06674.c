int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 87;
    int v2 = 62;
    int v3 = 15;
    int i;
    if (v3 > v2) { v3 = v2; }
    v1 = v1 / (v2 + 1);
    v1 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
