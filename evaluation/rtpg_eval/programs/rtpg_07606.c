int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 55;
    int v2 = 36;
    int v3 = 82;
    int v4 = 59;
    int v5 = 54;
    int i;
    v1 = v1 + v1;
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
