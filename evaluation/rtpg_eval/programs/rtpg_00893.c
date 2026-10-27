int test_func(void) {
    int v0 = 45;
    int v1 = 49;
    int v2 = 57;
    int v3 = 14;
    int v4 = 10;
    int v5 = 18;
    int v6 = 41;
    int v7 = 11;
    int i;
    v0 = v0 - v5;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v5;
    }
    v0 = v0 * 9;
    return v0;
}
int main(void) { return test_func(); }
