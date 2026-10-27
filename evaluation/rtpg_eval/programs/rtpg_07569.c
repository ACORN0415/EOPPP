int test_func(void) {
    int v0 = 34;
    int v1 = 27;
    int v2 = 99;
    int i;
    v0 = v0 * 2;
    v2 = 26;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
