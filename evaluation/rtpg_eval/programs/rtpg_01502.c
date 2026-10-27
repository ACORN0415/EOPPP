int __arr_1502[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 59;
    int v2 = 14;
    int v3 = 80;
    int v4 = 55;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 10; i++) { __arr_1502[i] = v0 + i; }
    v4 = __arr_didx[__idx_didx[0]];
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
