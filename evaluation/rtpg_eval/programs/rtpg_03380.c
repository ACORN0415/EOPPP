int test_func(void) {
    int v0 = 17;
    int v1 = 51;
    int v2 = 26;
    int v3 = 12;
    int v4 = 61;
    int v5 = 100;
    int v6 = 15;
    int v7 = 16;
    int i;
    v1 = v1 + v7;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v7;
    }
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
