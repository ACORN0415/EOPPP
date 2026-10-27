int __arr_7932[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 87;
    int v2 = 56;
    int v3 = 37;
    int v4 = 38;
    int v5 = 41;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_7932[i] = v0 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
