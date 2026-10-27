int __arr_6131[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 34;
    int v2 = 83;
    int v3 = 79;
    int v4 = 81;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_6131[i] = v3 + i; }
    v0 = v0 * 2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
