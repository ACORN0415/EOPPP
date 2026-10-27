int test_func(void) {
    int v0 = 19;
    int v1 = 32;
    int v2 = 80;
    int v3 = 64;
    int v4 = 13;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v4;
    }
    v3 = v3 * 5;
    return v0;
}
int main(void) { return test_func(); }
