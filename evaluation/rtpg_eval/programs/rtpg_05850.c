int __arr_5850[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 42;
    int v2 = 64;
    int v3 = 60;
    int v4 = 48;
    int v5 = 95;
    int v6 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_5850[i] = v3 + i; }
    v3 = v3 + v4;
    v0 = v0 * 4;
    return v0;
}
int main(void) { return test_func(); }
