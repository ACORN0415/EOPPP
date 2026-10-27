int __arr_5696[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 43;
    int v2 = 60;
    int v3 = 56;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_5696[i] = v3 + i; }
    v1 = v1 - v3;
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
