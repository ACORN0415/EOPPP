int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 63;
    int v2 = 35;
    int v3 = 22;
    int v4 = 25;
    int i;
    v1 = 40;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v4;
    }
    v0 = v0 % (v3 + 1);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
