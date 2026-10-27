int __arr_4967[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 92;
    int v2 = 60;
    int i;
    v1 = v1 * 5;
    for (i = 0; i < 10; i++) { __arr_4967[i] = v2 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
