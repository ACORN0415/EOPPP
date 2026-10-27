int __arr_4728[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 57;
    int v2 = 96;
    int v3 = 45;
    int v4 = 93;
    int v5 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_4728[i] = v0 + i; }
    v0 = v0 + v3;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
