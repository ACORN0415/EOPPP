int __arr_1315[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 74;
    int v2 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_1315[i] = v1 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
