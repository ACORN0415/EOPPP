int __arr_8765[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 47;
    int v2 = 1;
    int v3 = 41;
    int v4 = 65;
    int v5 = 9;
    int v6 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_8765[i] = v2 + i; }
    v2 = v2 * 4;
    v1 = v1 - v5;
    return v0;
}
int main(void) { return test_func(); }
