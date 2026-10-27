int __arr_1845[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 93;
    int v2 = 45;
    int v3 = 21;
    int v4 = 9;
    int v5 = 86;
    int v6 = 97;
    int v7 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_1845[i] = v7 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
