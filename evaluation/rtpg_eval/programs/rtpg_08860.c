int test_func(void) {
    int v0 = 55;
    int v1 = 32;
    int v2 = 94;
    int v3 = 22;
    int v4 = 32;
    int v5 = 33;
    int v6 = 48;
    int v7 = 83;
    int i;
    v1 = v1 * 3;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    v7 = v7 + v5;
    return v0;
}
int main(void) { return test_func(); }
