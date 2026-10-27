int __arr_1032[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 10;
    int v2 = 57;
    int i;
    if (v1 > v2) { v1 = v2; }
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_1032[i] = v2 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
