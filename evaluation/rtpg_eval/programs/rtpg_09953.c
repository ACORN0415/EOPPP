int __arr_9953[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 94;
    int v2 = 39;
    int v3 = 11;
    int v4 = 66;
    int v5 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_9953[i] = v4 + i; }
    for (i = 0; i < 13; i++) {
        v5 = v5 + v1;
    }
    v4 = v4 - v2;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v3 = v3 ^ v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
