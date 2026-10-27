int test_func(void) {
    int v0 = 77;
    int v1 = 35;
    int v2 = 19;
    int v3 = 100;
    int v4 = 19;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    v3 = v3 - v1;
    v4 = v4 + v1;
    v4 = v4 * 4;
    return v0;
}
int main(void) { return test_func(); }
