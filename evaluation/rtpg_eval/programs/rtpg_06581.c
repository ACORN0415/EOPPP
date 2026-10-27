int __arr_6581[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 70;
    int v2 = 24;
    int v3 = 5;
    int v4 = 88;
    int v5 = 16;
    int i;
    v1 = v1 - v3;
    for (i = 0; i < 10; i++) { __arr_6581[i] = v1 + i; }
    v0 = v0 * 6;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
