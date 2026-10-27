int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 35;
    int v2 = 19;
    int v3 = 80;
    int v4 = 3;
    int v5 = 2;
    int v6 = 25;
    int v7 = 94;
    int i;
    v7 = 100;
    if (v5 > v2) { v5 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
