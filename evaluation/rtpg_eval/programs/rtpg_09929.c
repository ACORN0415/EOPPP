int __arr_9929[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 41;
    int v2 = 88;
    int v3 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_9929[i] = v1 + i; }
    v0 = 71;
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
