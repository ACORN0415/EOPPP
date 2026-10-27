int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 86;
    int v2 = 6;
    int v3 = 46;
    int i;
    v1 = 56;
    v3 = v3 / (v0 + 1);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
