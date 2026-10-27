int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 17;
    int v2 = 98;
    int v3 = 4;
    int v4 = 38;
    int v5 = 71;
    int i;
    v0 = v0 + v1;
    if (v3 > v5) { v3 = v5; }
    v5 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
