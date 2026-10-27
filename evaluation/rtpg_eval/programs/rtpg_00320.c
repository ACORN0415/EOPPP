int test_func(void) {
    int v0 = 91;
    int v1 = 78;
    int v2 = 27;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 * 8;
    return v0;
}
int main(void) { return test_func(); }
