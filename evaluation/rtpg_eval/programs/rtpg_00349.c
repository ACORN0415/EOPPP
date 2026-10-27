int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 46;
    int v2 = 30;
    int v3 = 17;
    int i;
    v0 = v0 + v1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
