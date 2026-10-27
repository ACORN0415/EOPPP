int __arr_5736[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 61;
    int v2 = 93;
    int v3 = 90;
    int i;
    for (i = 0; i < 10; i++) { __arr_5736[i] = v0 + i; }
    v2 = 92;
    v1 = v1 - v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
