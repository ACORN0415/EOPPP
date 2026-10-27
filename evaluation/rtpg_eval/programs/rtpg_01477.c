int test_func(void) {
    int v0 = 72;
    int v1 = 16;
    int v2 = 76;
    int v3 = 33;
    int v4 = 36;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v2;
    }
    v2 = v2 * 4;
    return v0;
}
int main(void) { return test_func(); }
