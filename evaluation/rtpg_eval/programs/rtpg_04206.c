int test_func(void) {
    int v0 = 26;
    int v1 = 54;
    int v2 = 100;
    int v3 = 84;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v3;
    }
    v2 = v2 * 9;
    return v0;
}
int main(void) { return test_func(); }
