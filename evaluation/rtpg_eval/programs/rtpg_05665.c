int test_func(void) {
    int v0 = 90;
    int v1 = 83;
    int v2 = 47;
    int v3 = 13;
    int v4 = 69;
    int i;
    if (v2 > v4) { v2 = v4; }
    v3 = v3 + v4;
    v0 = v0 * 10;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
