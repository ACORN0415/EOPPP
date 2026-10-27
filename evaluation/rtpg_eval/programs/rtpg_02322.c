int __arr_2322[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 44;
    int v2 = 10;
    int i;
    v0 = v0 * 3;
    v0 = v0 - v2;
    for (i = 0; i < 10; i++) { __arr_2322[i] = v1 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
