int test_func(void) {
    int v0 = 1;
    int v1 = 51;
    int v2 = 27;
    int v3 = 83;
    int i;
    v0 = v0 * 8;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
