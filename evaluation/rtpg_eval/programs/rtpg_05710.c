int test_func(void) {
    int v0 = 68;
    int v1 = 13;
    int v2 = 32;
    int v3 = 0;
    int v4 = 61;
    int v5 = 36;
    int v6 = 79;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v3;
    }
    v0 = 13;
    v1 = v1 - v4;
    v0 = v0 * 6;
    return v0;
}
int main(void) { return test_func(); }
