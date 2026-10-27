int __arr_8729[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 4;
    int v2 = 38;
    int v3 = 38;
    int v4 = 84;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_8729[i] = v4 + i; }
    return v0;
}
int main(void) { return test_func(); }
