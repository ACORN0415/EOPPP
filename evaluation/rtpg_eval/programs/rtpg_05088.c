int test_func(void) {
    int v0 = 91;
    int v1 = 24;
    int v2 = 24;
    int v3 = 89;
    int v4 = 78;
    int i;
    v4 = v4 * 10;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
