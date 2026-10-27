int test_func(void) {
    int v0 = 11;
    int v1 = 58;
    int v2 = 84;
    int v3 = 75;
    int v4 = 48;
    int v5 = 64;
    int v6 = 8;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v5;
    }
    v6 = v6 * 8;
    v1 = 99;
    return v0;
}
int main(void) { return test_func(); }
