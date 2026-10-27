int __arr_8904[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 22;
    int v2 = 100;
    int v3 = 81;
    int v4 = 75;
    int v5 = 55;
    int v6 = 100;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 10; i++) { __arr_8904[i] = v1 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
