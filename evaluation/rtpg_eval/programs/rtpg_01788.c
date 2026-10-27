int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 29;
    int v2 = 9;
    int v3 = 23;
    int v4 = 90;
    int v5 = 25;
    int i;
    if (v1 > v5) { v1 = v5; }
    v3 = v3 + v3;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
