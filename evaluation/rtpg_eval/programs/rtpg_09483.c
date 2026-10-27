int test_func(void) {
    int v0 = 97;
    int v1 = 77;
    int v2 = 60;
    int v3 = 31;
    int v4 = 65;
    int v5 = 86;
    int v6 = 86;
    int i;
    v6 = v6 * 2;
    v2 = v2 + v1;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
