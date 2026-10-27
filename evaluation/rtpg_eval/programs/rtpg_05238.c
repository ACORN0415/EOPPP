int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 44;
    int v2 = 65;
    int v3 = 21;
    int i;
    v0 = v0 + v0;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
