int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 21;
    int v2 = 50;
    int v3 = 50;
    int i;
    v0 = v0 - v1;
    v0 = v0 ^ v1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
