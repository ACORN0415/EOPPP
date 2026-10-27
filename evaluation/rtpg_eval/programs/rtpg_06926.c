int __arr_6926[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 52;
    int v2 = 48;
    int v3 = 56;
    int v4 = 33;
    int v5 = 41;
    int v6 = 17;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_6926[i] = v1 + i; }
    v4 = 60;
    for (i = 0; i < 7; i++) {
        v7 = v7 + v5;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
