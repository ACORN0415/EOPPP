int test_func(void) {
    int v0 = 74;
    int v1 = 40;
    int v2 = 5;
    int v3 = 61;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v0;
    }
    v2 = v2 * 4;
    return v0;
}
int main(void) { return test_func(); }
