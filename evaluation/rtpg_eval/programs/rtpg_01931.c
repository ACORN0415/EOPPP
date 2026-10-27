int __arr_1931[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 54;
    int v2 = 12;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_1931[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
