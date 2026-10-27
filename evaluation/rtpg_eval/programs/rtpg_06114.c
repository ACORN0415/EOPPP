int test_func(void) {
    int v0 = 65;
    int v1 = 6;
    int v2 = 4;
    int v3 = 61;
    int i;
    v2 = 33;
    v3 = v3 * 8;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v2;
    }
    if (v0 > v0) { v0 = v0; }
    return v0;
}
int main(void) { return test_func(); }
