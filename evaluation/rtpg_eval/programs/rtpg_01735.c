int __arr_1735[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 89;
    int v2 = 71;
    int v3 = 35;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_1735[i] = v1 + i; }
    v2 = v2 / (v3 + 1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
