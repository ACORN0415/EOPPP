int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 8;
    int v2 = 10;
    int v3 = 6;
    int v4 = 35;
    int v5 = 25;
    int v6 = 73;
    int v7 = 92;
    int i;
    v0 = v0 + v2;
    v1 = 9;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
