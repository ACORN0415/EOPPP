int test_func(void) {
    int v0 = 62;
    int v1 = 41;
    int v2 = 75;
    int v3 = 19;
    int v4 = 58;
    int v5 = 97;
    int v6 = 71;
    int i;
    v5 = 22;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v3;
    }
    v0 = v0 * 10;
    return v0;
}
int main(void) { return test_func(); }
