int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 63;
    int v2 = 60;
    int i;
    v2 = v2 + v2;
    v1 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
