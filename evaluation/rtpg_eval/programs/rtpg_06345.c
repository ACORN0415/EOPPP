int __arr_6345[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 42;
    int v2 = 89;
    int v3 = 42;
    int v4 = 68;
    int v5 = 87;
    int v6 = 14;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) { __arr_6345[i] = v4 + i; }
    return v0;
}
int main(void) { return test_func(); }
