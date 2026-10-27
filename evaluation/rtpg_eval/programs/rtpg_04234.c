int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 74;
    int v2 = 53;
    int v3 = 15;
    int v4 = 43;
    int v5 = 53;
    int i;
    v2 = v2 + v3;
    v2 = v2 % (v3 + 1);
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
