int test_func(void) {
    int v0 = 11;
    int v1 = 86;
    int v2 = 86;
    int v3 = 65;
    int v4 = 97;
    int v5 = 44;
    int v6 = 92;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v6;
    }
    v4 = v4 * 5;
    v4 = v4 - v6;
    return v0;
}
int main(void) { return test_func(); }
