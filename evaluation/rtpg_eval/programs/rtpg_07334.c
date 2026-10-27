int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 76;
    int v2 = 90;
    int v3 = 84;
    int v4 = 61;
    int v5 = 63;
    int v6 = 21;
    int i;
    v3 = v3 - v0;
    v5 = 54;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v6 = v6 | v0;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
