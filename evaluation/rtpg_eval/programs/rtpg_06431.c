int __arr_6431[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 75;
    int v2 = 33;
    int v3 = 33;
    int v4 = 90;
    int v5 = 46;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_6431[i] = v1 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
