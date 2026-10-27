int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 23;
    int v2 = 42;
    int v3 = 31;
    int v4 = 44;
    int i;
    v1 = v1 + v4;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
