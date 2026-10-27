int test_func(void) {
    int v0 = 72;
    int v1 = 75;
    int v2 = 44;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 * 9;
    v1 = 92;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
