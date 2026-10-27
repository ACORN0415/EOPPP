int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 1;
    int v2 = 73;
    int v3 = 78;
    int v4 = 75;
    int v5 = 89;
    int v6 = 43;
    int i;
    v5 = 39;
    v5 = __arr_didx[__idx_didx[0]];
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
