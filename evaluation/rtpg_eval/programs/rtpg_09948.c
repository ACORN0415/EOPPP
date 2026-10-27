int test_func(void) {
    int v0 = 84;
    int v1 = 83;
    int v2 = 42;
    int v3 = 56;
    int v4 = 58;
    int v5 = 80;
    int v6 = 79;
    int i;
    v2 = v2 * 8;
    v6 = v6 + v4;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v1;
    }
    v5 = 9;
    return v0;
}
int main(void) { return test_func(); }
