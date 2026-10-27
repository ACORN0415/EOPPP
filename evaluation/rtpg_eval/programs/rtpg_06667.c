int __arr_6667[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 4;
    int v2 = 48;
    int v3 = 33;
    int v4 = 98;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 10; i++) { __arr_6667[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
