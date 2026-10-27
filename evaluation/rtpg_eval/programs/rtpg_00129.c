int test_func(void) {
    int v0 = 69;
    int v1 = 37;
    int v2 = 16;
    int i;
    v0 = v0 * 9;
    v2 = v2 - v0;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
