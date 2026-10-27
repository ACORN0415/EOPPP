int test_func(void) {
    int v0 = 91;
    int v1 = 47;
    int v2 = 42;
    int v3 = 38;
    int v4 = 99;
    int v5 = 73;
    int i;
    v3 = v3 * 2;
    v4 = v4 + v5;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
