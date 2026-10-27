int test_func(void) {
    int v0 = 43;
    int v1 = 75;
    int v2 = 31;
    int v3 = 47;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v3;
    }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
