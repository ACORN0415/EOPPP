int __arr_3017[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 95;
    int v2 = 44;
    int v3 = 12;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 10; i++) { __arr_3017[i] = v3 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
