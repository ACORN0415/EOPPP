int __arr_708[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 70;
    int v2 = 68;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_708[i] = v1 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
