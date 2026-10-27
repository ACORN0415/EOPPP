int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 84;
    int v2 = 8;
    int v3 = 46;
    int i;
    if (v0 > v1) { v0 = v1; }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
