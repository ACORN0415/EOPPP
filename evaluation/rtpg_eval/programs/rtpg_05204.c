int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 60;
    int v2 = 39;
    int v3 = 77;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
