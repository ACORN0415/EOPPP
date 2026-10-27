int test_func(void) {
    int v0 = 70;
    int v1 = 38;
    int v2 = 97;
    int v3 = 33;
    int v4 = 19;
    int i;
    v1 = v1 - v3;
    v2 = v2 * 9;
    v2 = v2 + v0;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
