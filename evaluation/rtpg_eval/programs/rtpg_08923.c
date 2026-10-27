int test_func(void) {
    int v0 = 15;
    int v1 = 35;
    int v2 = 46;
    int v3 = 53;
    int v4 = 71;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 * 9;
    return v0;
}
int main(void) { return test_func(); }
