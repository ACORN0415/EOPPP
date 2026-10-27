int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 73;
    int v2 = 27;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    if (v2 > v2) { v2 = v2; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
