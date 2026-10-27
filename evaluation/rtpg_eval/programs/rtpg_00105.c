int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 18;
    int v2 = 85;
    int v3 = 28;
    int v4 = 12;
    int v5 = 55;
    int i;
    if (v2 > v5) { v2 = v5; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
