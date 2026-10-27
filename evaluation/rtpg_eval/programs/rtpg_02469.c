int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 4;
    int v2 = 63;
    int v3 = 89;
    int i;
    v3 = v3 + v0;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
