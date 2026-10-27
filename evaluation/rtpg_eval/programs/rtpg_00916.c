int __arr_916[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 44;
    int v2 = 89;
    int v3 = 39;
    int v4 = 22;
    int v5 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_916[i] = v0 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v1 = v1 % (v5 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
