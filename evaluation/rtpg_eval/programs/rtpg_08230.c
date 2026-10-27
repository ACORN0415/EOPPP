int test_func(void) {
    int v0 = 28;
    int v1 = 22;
    int v2 = 78;
    int v3 = 66;
    int i;
    v2 = v2 * 6;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v0;
    }
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
