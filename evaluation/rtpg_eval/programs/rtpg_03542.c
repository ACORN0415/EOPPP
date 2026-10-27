int __arr_3542[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 42;
    int v2 = 83;
    int v3 = 35;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_3542[i] = v2 + i; }
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
