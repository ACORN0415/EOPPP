int test_func(void) {
    int v0 = 62;
    int v1 = 71;
    int v2 = 21;
    int v3 = 40;
    int v4 = 7;
    int v5 = 52;
    int v6 = 33;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v5;
    }
    v1 = 50;
    v1 = v1 * 7;
    return v0;
}
int main(void) { return test_func(); }
