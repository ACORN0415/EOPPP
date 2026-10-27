int test_func(void) {
    int v0 = 38;
    int v1 = 86;
    int v2 = 71;
    int v3 = 54;
    int v4 = 42;
    int i;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 + v0;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
