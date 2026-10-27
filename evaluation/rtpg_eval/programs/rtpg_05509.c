int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 56;
    int v2 = 47;
    int i;
    v1 = 60;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
