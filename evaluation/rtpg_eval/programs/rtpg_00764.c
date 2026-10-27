int __arr_764[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 71;
    int v2 = 99;
    int v3 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_764[i] = v2 + i; }
    v2 = 71;
    v2 = v2 * 6;
    if (v0 > v3) { v0 = v3; }
    return v0;
}
int main(void) { return test_func(); }
