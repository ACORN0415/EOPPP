int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 75;
    int v2 = 36;
    int v3 = 94;
    int v4 = 89;
    int v5 = 72;
    int v6 = 58;
    int i;
    v0 = v0 * 4;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
