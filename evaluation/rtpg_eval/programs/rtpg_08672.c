int __arr_8672[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 42;
    int v2 = 32;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_8672[i] = v1 + i; }
    v0 = 71;
    return v0;
}
int main(void) { return test_func(); }
