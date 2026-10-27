int test_func(void) {
    int v0 = 30;
    int v1 = 2;
    int v2 = 83;
    int v3 = 37;
    int v4 = 74;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v4;
    }
    v1 = v1 * 2;
    v3 = 16;
    v0 = v0 + v4;
    return v0;
}
int main(void) { return test_func(); }
