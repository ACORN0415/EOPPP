int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 45;
    int v2 = 93;
    int v3 = 33;
    int v4 = 18;
    int i;
    if (v4 > v3) { v4 = v3; }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
