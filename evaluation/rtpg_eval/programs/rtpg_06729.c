int __arr_6729[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 92;
    int v2 = 44;
    int v3 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_6729[i] = v0 + i; }
    if (v2 > v3) { v2 = v3; }
    v2 = v2 * 9;
    return v0;
}
int main(void) { return test_func(); }
