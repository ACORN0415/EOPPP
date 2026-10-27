int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 8;
    int v2 = 9;
    int v3 = 76;
    int v4 = 57;
    int v5 = 61;
    int i;
    v1 = v1 + v3;
    v0 = __arr_didx[__idx_didx[0]];
    v2 = v2 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
