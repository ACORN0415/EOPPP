int test_func(void) {
    int v0 = 81;
    int v1 = 64;
    int v2 = 93;
    int v3 = 77;
    int v4 = 54;
    int i;
    v3 = v3 - v0;
    if (v4 > v2) { v4 = v2; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    v4 = v4 * 8;
    return v0;
}
int main(void) { return test_func(); }
