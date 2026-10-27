int test_func(void) {
    int v0 = 37;
    int v1 = 38;
    int v2 = 53;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 + v2;
    v1 = v1 * 3;
    return v0;
}
int main(void) { return test_func(); }
