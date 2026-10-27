int __arr_7249[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 16;
    int v2 = 82;
    int v3 = 36;
    int v4 = 59;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_7249[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
