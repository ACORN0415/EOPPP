int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 4;
    int v2 = 83;
    int v3 = 40;
    int i;
    v2 = v2 + v2;
    if (v0 > v3) { v0 = v3; }
    v3 = 81;
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
