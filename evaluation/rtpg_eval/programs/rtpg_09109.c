int __arr_9109[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 82;
    int v2 = 74;
    int v3 = 46;
    int v4 = 85;
    int v5 = 87;
    int v6 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_9109[i] = v6 + i; }
    v6 = v6 + v5;
    if (v5 > v6) { v5 = v6; }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
