int __arr_112[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 9;
    int v2 = 34;
    int v3 = 19;
    int v4 = 90;
    int v5 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_112[i] = v5 + i; }
    v0 = v0 + v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
