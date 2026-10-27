int __arr_4976[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 63;
    int v2 = 57;
    int v3 = 28;
    int v4 = 42;
    int i;
    v3 = 0;
    v1 = v1 - v3;
    for (i = 0; i < 10; i++) { __arr_4976[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
