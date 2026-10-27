int test_func(void) {
    int v0 = 54;
    int v1 = 0;
    int v2 = 71;
    int v3 = 2;
    int i;
    v2 = 89;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v0;
    }
    v3 = v3 * 3;
    v0 = v0 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
