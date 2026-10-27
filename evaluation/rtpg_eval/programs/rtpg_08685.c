int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 72;
    int v2 = 88;
    int i;
    v1 = v1 - v0;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
