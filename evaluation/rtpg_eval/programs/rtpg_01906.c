int test_func(void) {
    int v0 = 33;
    int v1 = 35;
    int v2 = 30;
    int v3 = 14;
    int v4 = 7;
    int i;
    v0 = v0 * 10;
    v3 = v3 + v3;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
