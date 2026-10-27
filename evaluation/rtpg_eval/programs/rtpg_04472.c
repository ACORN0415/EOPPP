int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 28;
    int v2 = 82;
    int v3 = 53;
    int v4 = 15;
    int v5 = 95;
    int i;
    if (v0 > v1) { v0 = v1; }
    v5 = v5 - v0;
    v5 = v5 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
