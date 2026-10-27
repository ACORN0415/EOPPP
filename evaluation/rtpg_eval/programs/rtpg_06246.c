int test_func(void) {
    int v0 = 41;
    int v1 = 37;
    int v2 = 62;
    int v3 = 74;
    int v4 = 32;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    v3 = v3 * 7;
    return v0;
}
int main(void) { return test_func(); }
