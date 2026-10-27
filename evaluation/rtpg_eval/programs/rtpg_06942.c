int __arr_6942[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 85;
    int v2 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_6942[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
