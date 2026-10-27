int test_func(void) {
    int v0 = 53;
    int v1 = 71;
    int v2 = 15;
    int v3 = 40;
    int i;
    v1 = v1 - v2;
    v1 = v1 + v3;
    v0 = v0 * 9;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
