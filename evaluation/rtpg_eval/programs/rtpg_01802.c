int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 61;
    int v2 = 56;
    int v3 = 89;
    int v4 = 59;
    int v5 = 61;
    int v6 = 21;
    int i;
    v1 = v1 + v3;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
