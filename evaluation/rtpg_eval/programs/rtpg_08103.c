int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 84;
    int v2 = 20;
    int v3 = 76;
    int v4 = 95;
    int v5 = 92;
    int i;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
