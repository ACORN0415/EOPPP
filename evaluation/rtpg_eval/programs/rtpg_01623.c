int test_func(void) {
    int v0 = 62;
    int v1 = 85;
    int v2 = 77;
    int v3 = 52;
    int i;
    v1 = v1 * 3;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
