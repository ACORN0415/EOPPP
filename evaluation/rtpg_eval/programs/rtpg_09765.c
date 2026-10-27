int test_func(void) {
    int v0 = 19;
    int v1 = 18;
    int v2 = 49;
    int v3 = 14;
    int v4 = 26;
    int v5 = 54;
    int i;
    v3 = v3 * 4;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
