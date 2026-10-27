int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 55;
    int v2 = 13;
    int v3 = 4;
    int v4 = 6;
    int v5 = 46;
    int v6 = 44;
    int i;
    v2 = v2 + v4;
    v3 = v3 - v1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
