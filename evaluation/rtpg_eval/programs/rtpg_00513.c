int test_func(void) {
    int v0 = 33;
    int v1 = 94;
    int v2 = 64;
    int v3 = 65;
    int v4 = 11;
    int v5 = 10;
    int i;
    v4 = 28;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 * 10;
    return v0;
}
int main(void) { return test_func(); }
