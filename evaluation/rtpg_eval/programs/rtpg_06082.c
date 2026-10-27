int __arr_6082[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 46;
    int v2 = 42;
    int v3 = 56;
    int v4 = 95;
    int v5 = 73;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 10; i++) { __arr_6082[i] = v2 + i; }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
