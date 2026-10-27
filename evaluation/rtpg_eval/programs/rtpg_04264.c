int __arr_4264[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 22;
    int v2 = 88;
    int v3 = 60;
    int v4 = 48;
    int v5 = 15;
    int v6 = 35;
    int v7 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_4264[i] = v2 + i; }
    v5 = 48;
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v4;
    *__p = *__p + 1;
    v5 = v5 | v0;
    return v0;
}
int main(void) { return test_func(); }
