int __arr_4982[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 56;
    int v2 = 2;
    int v3 = 15;
    int v4 = 42;
    int i;
    if (v4 > v1) { v4 = v1; }
    for (i = 0; i < 10; i++) { __arr_4982[i] = v4 + i; }
    v1 = v1 - v4;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
