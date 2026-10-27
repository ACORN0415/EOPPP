int test_func(void) {
    int v0 = 64;
    int v1 = 44;
    int v2 = 8;
    int v3 = 96;
    int v4 = 63;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    v3 = v3 + v1;
    v1 = v1 * 10;
    return v0;
}
int main(void) { return test_func(); }
