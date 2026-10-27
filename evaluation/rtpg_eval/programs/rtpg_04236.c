int __arr_4236[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 59;
    int v2 = 49;
    int v3 = 40;
    int v4 = 94;
    int v5 = 41;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_4236[i] = v2 + i; }
    v0 = v0 * 6;
    return v0;
}
int main(void) { return test_func(); }
