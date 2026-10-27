int test_func(void) {
    int v0 = 13;
    int v1 = 22;
    int v2 = 62;
    int v3 = 75;
    int v4 = 49;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
