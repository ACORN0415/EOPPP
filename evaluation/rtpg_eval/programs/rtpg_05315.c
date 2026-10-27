int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 57;
    int v2 = 54;
    int v3 = 85;
    int v4 = 19;
    int v5 = 24;
    int v6 = 13;
    int v7 = 70;
    int i;
    if (v0 > v7) { v0 = v7; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
