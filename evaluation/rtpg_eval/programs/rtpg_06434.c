int test_func(void) {
    int v0 = 43;
    int v1 = 65;
    int v2 = 86;
    int v3 = 92;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v1;
    v3 = v3 * 10;
    return v0;
}
int main(void) { return test_func(); }
