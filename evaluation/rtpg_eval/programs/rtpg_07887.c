int __arr_7887[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 46;
    int v2 = 27;
    int v3 = 42;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7887[i] = v3 + i; }
    v2 = v2 + v2;
    return v0;
}
int main(void) { return test_func(); }
