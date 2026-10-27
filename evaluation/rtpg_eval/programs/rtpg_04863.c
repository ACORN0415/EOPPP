int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 87;
    int v2 = 48;
    int v3 = 19;
    int v4 = 49;
    int v5 = 29;
    int i;
    if (v0 > v3) { v0 = v3; }
    v0 = 84;
    v4 = __arr_didx[__idx_didx[0]];
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
