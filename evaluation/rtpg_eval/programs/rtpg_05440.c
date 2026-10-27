int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 95;
    int v2 = 20;
    int v3 = 88;
    int v4 = 15;
    int i;
    v0 = v0 + v1;
    if (v1 > v3) { v1 = v3; }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
