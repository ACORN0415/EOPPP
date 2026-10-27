int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 49;
    int v2 = 99;
    int v3 = 46;
    int v4 = 76;
    int v5 = 23;
    int v6 = 5;
    int i;
    v5 = v5 - v0;
    if (v1 > v0) { v1 = v0; }
    v0 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
