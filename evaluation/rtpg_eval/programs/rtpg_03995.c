int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 57;
    int v2 = 19;
    int v3 = 48;
    int v4 = 19;
    int v5 = 41;
    int v6 = 46;
    int i;
    v3 = 23;
    if (v6 > v0) { v6 = v0; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
