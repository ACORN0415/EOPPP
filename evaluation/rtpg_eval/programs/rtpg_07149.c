int __arr_7149[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 28;
    int v2 = 87;
    int v3 = 22;
    int v4 = 55;
    int i;
    v0 = v0 * 6;
    for (i = 0; i < 10; i++) { __arr_7149[i] = v2 + i; }
    for (i = 0; i < 20; i++) {
        v4 = v4 + v0;
    }
    v3 = v3 - v4;
    return v0;
}
int main(void) { return test_func(); }
