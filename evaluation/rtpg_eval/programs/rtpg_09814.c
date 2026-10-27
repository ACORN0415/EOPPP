int test_func(void) {
    int v0 = 5;
    int v1 = 18;
    int v2 = 18;
    int v3 = 15;
    int v4 = 19;
    int v5 = 42;
    int v6 = 19;
    int i;
    v2 = v2 * 7;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v6;
    }
    v4 = v4 + v2;
    v0 = v0 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
