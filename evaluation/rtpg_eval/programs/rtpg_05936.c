int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 73;
    int v2 = 40;
    int v3 = 61;
    int v4 = 78;
    int v5 = 57;
    int v6 = 78;
    int i;
    v1 = v1 + v0;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 10; i++) {
        v2 = v2 + v1;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
