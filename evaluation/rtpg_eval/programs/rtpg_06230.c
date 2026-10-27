int test_func(void) {
    int v0 = 22;
    int v1 = 84;
    int v2 = 88;
    int v3 = 64;
    int i;
    v1 = v1 * 6;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
