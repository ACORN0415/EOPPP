int test_func(void) {
    int v0 = 82;
    int v1 = 24;
    int v2 = 98;
    int v3 = 62;
    int i;
    v2 = 49;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 * 6;
    return v0;
}
int main(void) { return test_func(); }
