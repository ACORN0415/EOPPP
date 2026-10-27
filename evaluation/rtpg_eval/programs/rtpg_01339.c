int test_func(void) {
    int v0 = 72;
    int v1 = 80;
    int v2 = 32;
    int v3 = 41;
    int v4 = 98;
    int i;
    v4 = 7;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v4;
    }
    v2 = v2 * 3;
    v1 = v1 | v0;
    return v0;
}
int main(void) { return test_func(); }
