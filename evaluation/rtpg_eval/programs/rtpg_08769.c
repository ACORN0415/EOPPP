int __arr_8769[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 88;
    int v2 = 15;
    int v3 = 10;
    int v4 = 53;
    int v5 = 4;
    int v6 = 93;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v5;
    }
    if (v2 > v6) { v2 = v6; }
    v2 = v2 + v6;
    for (i = 0; i < 10; i++) { __arr_8769[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
