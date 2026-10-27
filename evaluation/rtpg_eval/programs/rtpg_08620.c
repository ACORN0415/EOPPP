int test_func(void) {
    int v0 = 39;
    int v1 = 90;
    int v2 = 44;
    int v3 = 41;
    int v4 = 76;
    int i;
    v0 = 36;
    v3 = v3 * 4;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
