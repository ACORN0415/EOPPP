int __arr_3638[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 36;
    int v2 = 9;
    int v3 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_3638[i] = v2 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
