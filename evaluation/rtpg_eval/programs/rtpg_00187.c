int __arr_187[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 4;
    int v2 = 48;
    int i;
    v0 = v0 * 6;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_187[i] = v2 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
