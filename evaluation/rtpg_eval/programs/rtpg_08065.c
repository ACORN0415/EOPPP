int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 47;
    int v2 = 69;
    int v3 = 89;
    int v4 = 83;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v4;
    }
    v3 = v3 | v0;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
