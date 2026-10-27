int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 82;
    int v2 = 77;
    int i;
    v2 = 71;
    v0 = v0 - v1;
    if (v0 > v1) { v0 = v1; }
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = v0 / (v1 + 1);
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
