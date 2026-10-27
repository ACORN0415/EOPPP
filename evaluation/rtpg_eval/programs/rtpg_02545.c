int test_func(void) {
    int v0 = 98;
    int v1 = 46;
    int v2 = 96;
    int v3 = 23;
    int v4 = 4;
    int i;
    v0 = v0 + v4;
    v0 = v0 * 7;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v1;
    }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
