int test_func(void) {
    int v0 = 88;
    int v1 = 15;
    int v2 = 67;
    int v3 = 74;
    int v4 = 13;
    int i;
    v1 = 90;
    v0 = v0 - v2;
    v4 = v4 * 6;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
