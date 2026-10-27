int test_func(void) {
    int v0 = 24;
    int v1 = 42;
    int v2 = 92;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v1;
    }
    v2 = v2 - v0;
    v1 = 81;
    v0 = v0 * 10;
    return v0;
}
int main(void) { return test_func(); }
