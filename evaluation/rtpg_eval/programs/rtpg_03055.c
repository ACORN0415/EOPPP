int test_func(void) {
    int v0 = 37;
    int v1 = 65;
    int v2 = 0;
    int v3 = 65;
    int v4 = 27;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v3;
    }
    v0 = v0 * 2;
    v0 = 42;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
