int test_func(void) {
    int v0 = 65;
    int v1 = 92;
    int v2 = 37;
    int v3 = 3;
    int v4 = 11;
    int i;
    v2 = v2 + v0;
    v2 = v2 - v1;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v3;
    }
    v3 = v3 * 9;
    return v0;
}
int main(void) { return test_func(); }
