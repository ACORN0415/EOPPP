int test_func(void) {
    int v0 = 70;
    int v1 = 76;
    int v2 = 79;
    int v3 = 88;
    int i;
    v0 = v0 * 6;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
