int test_func(void) {
    int v0 = 2;
    int v1 = 53;
    int v2 = 75;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 * 5;
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }
