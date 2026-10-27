int test_func(void) {
    int v0 = 96;
    int v1 = 85;
    int v2 = 67;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 - v2;
    v1 = v1 + v0;
    v1 = v1 * 6;
    return v0;
}
int main(void) { return test_func(); }
