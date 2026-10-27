int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 18;
    int v2 = 91;
    int v3 = 61;
    int i;
    if (v2 > v3) { v2 = v3; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v0 = v0 | v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
