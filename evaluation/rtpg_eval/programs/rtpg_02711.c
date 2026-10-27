int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 89;
    int v2 = 12;
    int v3 = 94;
    int v4 = 19;
    int v5 = 23;
    int i;
    v0 = v0 - v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
