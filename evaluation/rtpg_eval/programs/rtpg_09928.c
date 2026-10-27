int __arr_9928[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 17;
    int v2 = 13;
    int i;
    for (i = 0; i < 10; i++) { __arr_9928[i] = v0 + i; }
    v0 = v0 + v1;
    if (v0 > v2) { v0 = v2; }
    v1 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
