int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 60;
    int v2 = 66;
    int v3 = 39;
    int v4 = 15;
    int i;
    v2 = v2 + v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
