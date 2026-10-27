int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 44;
    int v2 = 94;
    int v3 = 43;
    int v4 = 39;
    int v5 = 95;
    int v6 = 52;
    int i;
    if (v2 > v5) { v2 = v5; }
    v4 = v4 - v2;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
