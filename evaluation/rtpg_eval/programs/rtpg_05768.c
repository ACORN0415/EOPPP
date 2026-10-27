int __arr_5768[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 21;
    int v2 = 13;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_5768[i] = v0 + i; }
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
