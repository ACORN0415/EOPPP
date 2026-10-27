int test_func(void) {
    int v0 = 26;
    int v1 = 55;
    int v2 = 16;
    int v3 = 90;
    int v4 = 83;
    int v5 = 99;
    int v6 = 75;
    int i;
    if (v6 > v0) { v6 = v0; }
    v6 = v6 * 5;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
