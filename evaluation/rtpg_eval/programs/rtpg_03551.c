int test_func(void) {
    int v0 = 93;
    int v1 = 29;
    int v2 = 19;
    int v3 = 92;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 * 4;
    return v0;
}
int main(void) { return test_func(); }
