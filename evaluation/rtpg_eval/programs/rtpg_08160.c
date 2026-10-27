int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 0;
    int v2 = 4;
    int v3 = 94;
    int i;
    v0 = 98;
    v2 = v2 - v1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
