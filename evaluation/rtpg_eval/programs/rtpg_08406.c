int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 56;
    int v2 = 90;
    int v3 = 60;
    int v4 = 30;
    int i;
    v2 = v2 - v3;
    v2 = __arr_didx[__idx_didx[0]];
    v3 = v3 / (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
