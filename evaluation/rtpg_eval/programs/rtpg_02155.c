int __arr_2155[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 5;
    int v2 = 64;
    int i;
    for (i = 0; i < 10; i++) { __arr_2155[i] = v1 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
