int test_func(void) {
    int v0 = 26;
    int v1 = 88;
    int v2 = 0;
    int v3 = 17;
    int i;
    v3 = v3 * 6;
    v0 = v0 - v1;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v0;
    }
    v2 = v2 + v2;
    return v0;
}
int main(void) { return test_func(); }
