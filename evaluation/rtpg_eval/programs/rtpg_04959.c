int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 34;
    int v2 = 70;
    int v3 = 46;
    int v4 = 52;
    int v5 = 31;
    int v6 = 46;
    int i;
    v6 = v6 - v3;
    v0 = v0 + v1;
    v4 = v4 / (v3 + 1);
    v4 = __arr_didx[__idx_didx[0]];
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
