int test_func(void) {
    int v0 = 15;
    int v1 = 43;
    int v2 = 70;
    int v3 = 0;
    int v4 = 75;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v3;
    }
    v0 = v0 - v2;
    v1 = v1 * 6;
    return v0;
}
int main(void) { return test_func(); }
