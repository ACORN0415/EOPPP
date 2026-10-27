int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 23;
    int v2 = 71;
    int v3 = 60;
    int v4 = 69;
    int v5 = 97;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v1;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
