int __arr_7[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 57;
    int v2 = 3;
    int v3 = 41;
    int v4 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_7[i] = v4 + i; }
    v4 = v4 * 7;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
