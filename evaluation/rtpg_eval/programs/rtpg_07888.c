int __arr_7888[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 91;
    int v2 = 50;
    int v3 = 36;
    int v4 = 66;
    int v5 = 61;
    int v6 = 44;
    int v7 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_7888[i] = v7 + i; }
    v6 = v6 - v0;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v4;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
