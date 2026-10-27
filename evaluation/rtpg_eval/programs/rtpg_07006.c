int test_func(void) {
    int v0 = 79;
    int v1 = 22;
    int v2 = 85;
    int v3 = 8;
    int v4 = 44;
    int v5 = 18;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v5;
    }
    v0 = v0 + v2;
    v3 = v3 * 9;
    return v0;
}
int main(void) { return test_func(); }
