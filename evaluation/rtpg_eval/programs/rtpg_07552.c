int __arr_7552[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 45;
    int v2 = 16;
    int v3 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_7552[i] = v2 + i; }
    for (i = 0; i < 9; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
