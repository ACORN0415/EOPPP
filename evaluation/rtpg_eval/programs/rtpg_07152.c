int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 51;
    int v2 = 40;
    int v3 = 61;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 * 4;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
