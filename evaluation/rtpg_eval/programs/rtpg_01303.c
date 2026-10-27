int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 70;
    int v2 = 18;
    int i;
    v2 = v2 * 7;
    if (v0 > v1) { v0 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
