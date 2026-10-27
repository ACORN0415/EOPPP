int test_func(void) {
    int v0 = 20;
    int v1 = 84;
    int v2 = 87;
    int v3 = 15;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    v2 = v2 - v3;
    v2 = v2 * 7;
    return v0;
}
int main(void) { return test_func(); }
