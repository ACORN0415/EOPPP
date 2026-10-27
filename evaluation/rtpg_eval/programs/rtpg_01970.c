int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 69;
    int v2 = 68;
    int v3 = 42;
    int i;
    v1 = v1 + v0;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
