int test_func(void) {
    int v0 = 64;
    int v1 = 7;
    int v2 = 21;
    int v3 = 60;
    int v4 = 88;
    int i;
    v1 = v1 * 5;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v0;
    }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
