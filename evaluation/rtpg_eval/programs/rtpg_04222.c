int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 40;
    int v2 = 18;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = v2 * 10;
    v0 = 65;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
