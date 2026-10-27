int __arr_897[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 34;
    int v2 = 57;
    int v3 = 6;
    int v4 = 92;
    int v5 = 68;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_897[i] = v0 + i; }
    if (v0 > v4) { v0 = v4; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
