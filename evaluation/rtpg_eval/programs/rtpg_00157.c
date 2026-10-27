int test_func(void) {
    int v0 = 34;
    int v1 = 32;
    int v2 = 62;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 | v0;
    return v0;
}
int main(void) { return test_func(); }
