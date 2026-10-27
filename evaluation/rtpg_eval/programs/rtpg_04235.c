int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 20;
    int v2 = 3;
    int v3 = 67;
    int v4 = 95;
    int i;
    if (v3 > v0) { v3 = v0; }
    v0 = v0 - v4;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
