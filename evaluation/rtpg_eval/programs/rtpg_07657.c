int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 41;
    int v2 = 46;
    int i;
    v0 = 73;
    v0 = v0 * 4;
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
