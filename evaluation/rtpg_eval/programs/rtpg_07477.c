int test_func(void) {
    int v0 = 75;
    int v1 = 88;
    int v2 = 91;
    int v3 = 52;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v3;
    }
    v3 = v3 - v2;
    v2 = v2 * 9;
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }
