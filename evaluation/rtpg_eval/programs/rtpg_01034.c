int __arr_1034[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 47;
    int v2 = 61;
    int v3 = 48;
    int v4 = 70;
    int v5 = 26;
    int i;
    v5 = v5 - v1;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_1034[i] = v2 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
