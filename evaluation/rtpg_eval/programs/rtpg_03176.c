int __arr_3176[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 16;
    int v2 = 63;
    int v3 = 36;
    int i;
    v3 = v3 * 6;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_3176[i] = v0 + i; }
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
