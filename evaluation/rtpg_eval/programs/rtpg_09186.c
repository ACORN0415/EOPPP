int test_func(void) {
    int v0 = 38;
    int v1 = 49;
    int v2 = 42;
    int v3 = 31;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v0;
    }
    v2 = v2 * 9;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
