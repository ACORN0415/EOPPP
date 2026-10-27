int test_func(void) {
    int v0 = 62;
    int v1 = 32;
    int v2 = 14;
    int v3 = 88;
    int v4 = 87;
    int v5 = 68;
    int v6 = 15;
    int v7 = 70;
    int i;
    for (i = 0; i < 15; i++) {
        v6 = v6 + v0;
    }
    v7 = 20;
    if (v1 > v0) { v1 = v0; }
    v6 = v6 * 3;
    return v0;
}
int main(void) { return test_func(); }
