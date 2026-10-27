int test_func(void) {
    int v0 = 16;
    int v1 = 2;
    int v2 = 72;
    int v3 = 89;
    int v4 = 14;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v3;
    }
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
