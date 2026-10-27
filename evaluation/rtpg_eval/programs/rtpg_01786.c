int __arr_1786[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 75;
    int v2 = 14;
    int i;
    v2 = 16;
    for (i = 0; i < 10; i++) { __arr_1786[i] = v1 + i; }
    v0 = v0 - v2;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
