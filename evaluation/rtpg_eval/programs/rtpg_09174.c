int test_func(void) {
    int v0 = 33;
    int v1 = 64;
    int v2 = 88;
    int v3 = 41;
    int v4 = 66;
    int v5 = 77;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v3;
    }
    v3 = v3 * 7;
    v3 = v3 + v5;
    v3 = 67;
    return v0;
}
int main(void) { return test_func(); }
