int test_func(void) {
    int v0 = 1;
    int v1 = 49;
    int v2 = 16;
    int i;
    v1 = 100;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 * 9;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
