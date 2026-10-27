int __arr_7375[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 82;
    int v2 = 34;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_7375[i] = v0 + i; }
    v1 = v1 - v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
