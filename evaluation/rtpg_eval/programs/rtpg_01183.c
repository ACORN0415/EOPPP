int test_func(void) {
    int v0 = 64;
    int v1 = 41;
    int v2 = 46;
    int v3 = 34;
    int v4 = 40;
    int i;
    v4 = v4 * 10;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
