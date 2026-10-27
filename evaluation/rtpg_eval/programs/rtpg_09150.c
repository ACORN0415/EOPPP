int __arr_9150[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 76;
    int v2 = 58;
    int v3 = 33;
    int v4 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_9150[i] = v2 + i; }
    v1 = v1 * 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
