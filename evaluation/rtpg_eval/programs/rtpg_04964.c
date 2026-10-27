int __arr_4964[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 49;
    int v2 = 59;
    int v3 = 19;
    int v4 = 5;
    int v5 = 96;
    int v6 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_4964[i] = v6 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
