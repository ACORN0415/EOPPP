int test_func(void) {
    int v0 = 52;
    int v1 = 57;
    int v2 = 62;
    int v3 = 86;
    int v4 = 80;
    int v5 = 75;
    int i;
    v1 = 42;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
