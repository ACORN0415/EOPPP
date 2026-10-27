int __arr_3999[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 83;
    int v2 = 77;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 + v0;
    v0 = v0 * 10;
    for (i = 0; i < 10; i++) { __arr_3999[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
