int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 8;
    int v2 = 12;
    int v3 = 89;
    int v4 = 12;
    int v5 = 15;
    int v6 = 100;
    int v7 = 91;
    int i;
    if (v5 > v4) { v5 = v4; }
    v0 = 59;
    v4 = v4 * 7;
    v3 = __arr_didx[__idx_didx[0]];
    v6 = v6 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
