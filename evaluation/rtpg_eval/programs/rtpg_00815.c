int test_func(void) {
    int v0 = 16;
    int v1 = 29;
    int v2 = 59;
    int v3 = 63;
    int v4 = 12;
    int v5 = 72;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v2;
    }
    v4 = v4 * 2;
    return v0;
}
int main(void) { return test_func(); }
