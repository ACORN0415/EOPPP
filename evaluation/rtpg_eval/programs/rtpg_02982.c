int __arr_2982[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 79;
    int v2 = 69;
    int v3 = 21;
    int v4 = 20;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_2982[i] = v3 + i; }
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    v3 = v3 * 4;
    return v0;
}
int main(void) { return test_func(); }
