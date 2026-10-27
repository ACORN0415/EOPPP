int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 50;
    int v2 = 98;
    int v3 = 74;
    int i;
    v2 = v2 * 2;
    v3 = v3 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    v3 = v3 & v2;
    return v0;
}
int main(void) { return test_func(); }
