int __arr_2163[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 80;
    int v2 = 51;
    int v3 = 100;
    int i;
    v3 = v3 * 8;
    for (i = 0; i < 10; i++) { __arr_2163[i] = v3 + i; }
    for (i = 0; i < 14; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
