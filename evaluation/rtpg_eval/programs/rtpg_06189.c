int test_func(void) {
    int v0 = 87;
    int v1 = 55;
    int v2 = 22;
    int v3 = 86;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v1;
    return v0;
}
int main(void) { return test_func(); }
