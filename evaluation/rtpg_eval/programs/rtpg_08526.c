int test_func(void) {
    int v0 = 62;
    int v1 = 27;
    int v2 = 49;
    int v3 = 23;
    int v4 = 32;
    int v5 = 93;
    int v6 = 96;
    int i;
    v1 = v1 * 4;
    v6 = v6 + v4;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
