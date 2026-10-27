int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 73;
    int v2 = 2;
    int v3 = 82;
    int i;
    v3 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
