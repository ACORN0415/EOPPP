int __arr_2785[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 33;
    int v2 = 36;
    int v3 = 1;
    int v4 = 31;
    int i;
    v2 = 68;
    for (i = 0; i < 10; i++) { __arr_2785[i] = v0 + i; }
    if (v4 > v2) { v4 = v2; }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
