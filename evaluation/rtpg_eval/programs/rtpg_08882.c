int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 34;
    int v2 = 84;
    int v3 = 96;
    int v4 = 71;
    int v5 = 40;
    int i;
    v5 = 65;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
