int __arr_7516[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 86;
    int v2 = 2;
    int v3 = 68;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v3;
    }
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_7516[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
