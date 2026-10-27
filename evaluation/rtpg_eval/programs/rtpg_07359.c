int test_func(void) {
    int v0 = 80;
    int v1 = 11;
    int v2 = 41;
    int v3 = 83;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 * 2;
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
