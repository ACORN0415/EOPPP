int test_func(void) {
    int v0 = 18;
    int v1 = 10;
    int v2 = 49;
    int v3 = 8;
    int i;
    v0 = 72;
    v0 = v0 * 8;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
