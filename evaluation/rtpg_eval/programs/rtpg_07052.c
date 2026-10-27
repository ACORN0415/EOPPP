int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 5;
    int v2 = 20;
    int v3 = 34;
    int v4 = 92;
    int v5 = 74;
    int v6 = 50;
    int v7 = 4;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
