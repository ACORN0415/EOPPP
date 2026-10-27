int test_func(void) {
    int v0 = 26;
    int v1 = 85;
    int v2 = 54;
    int v3 = 28;
    int v4 = 35;
    int v5 = 64;
    int i;
    v5 = v5 * 2;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
