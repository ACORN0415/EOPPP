int test_func(void) {
    int v0 = 57;
    int v1 = 96;
    int v2 = 29;
    int v3 = 42;
    int v4 = 19;
    int v5 = 32;
    int v6 = 18;
    int v7 = 50;
    int i;
    v1 = 19;
    for (i = 0; i < 15; i++) {
        v7 = v7 + v3;
    }
    v6 = v6 ^ v7;
    return v0;
}
int main(void) { return test_func(); }
