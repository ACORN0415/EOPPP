int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 79;
    int v2 = 43;
    int v3 = 89;
    int v4 = 1;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v3;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
