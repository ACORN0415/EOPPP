int __arr_7670[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 6;
    int v2 = 35;
    int i;
    for (i = 0; i < 10; i++) { __arr_7670[i] = v0 + i; }
    v1 = v1 * 7;
    v0 = v0 + v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
