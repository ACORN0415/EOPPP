int __arr_8284[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 32;
    int v2 = 41;
    int v3 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_8284[i] = v3 + i; }
    v3 = v3 + v1;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
