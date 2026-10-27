int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 60;
    int v2 = 59;
    int v3 = 22;
    int v4 = 25;
    int v5 = 34;
    int v6 = 22;
    int i;
    v0 = 51;
    v4 = v4 + v0;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
