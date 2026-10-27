int test_func(void) {
    int v0 = 99;
    int v1 = 48;
    int v2 = 41;
    int i;
    v2 = v2 * 8;
    v1 = v1 - v2;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
