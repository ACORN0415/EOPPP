int test_func(void) {
    int v0 = 11;
    int v1 = 32;
    int v2 = 9;
    int v3 = 86;
    int v4 = 70;
    int v5 = 87;
    int v6 = 22;
    int v7 = 62;
    int i;
    v6 = v6 + v2;
    for (i = 0; i < 18; i++) {
        v6 = v6 + v5;
    }
    v7 = v7 * 8;
    return v0;
}
int main(void) { return test_func(); }
