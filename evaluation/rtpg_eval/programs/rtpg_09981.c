int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 22;
    int v2 = 20;
    int i;
    if (v0 > v1) { v0 = v1; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
