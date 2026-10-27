int test_func(void) {
    int v0 = 54;
    int v1 = 20;
    int v2 = 33;
    int i;
    v0 = v0 * 4;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    v1 = 3;
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
