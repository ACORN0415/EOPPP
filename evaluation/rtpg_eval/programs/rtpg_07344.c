int test_func(void) {
    int v0 = 45;
    int v1 = 80;
    int v2 = 64;
    int v3 = 96;
    int v4 = 5;
    int v5 = 36;
    int v6 = 0;
    int v7 = 13;
    int i;
    v4 = v4 * 8;
    v1 = v1 - v2;
    for (i = 0; i < 6; i++) {
        v6 = v6 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
