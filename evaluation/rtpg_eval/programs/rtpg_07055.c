int test_func(void) {
    int v0 = 81;
    int v1 = 54;
    int v2 = 88;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v2;
    }
    if (v1 > v0) { v1 = v0; }
    v1 = v1 * 6;
    v2 = v2 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
