int test_func(void) {
    int v0 = 33;
    int v1 = 25;
    int v2 = 15;
    int v3 = 65;
    int v4 = 17;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v0;
    }
    v0 = v0 * 9;
    return v0;
}
int main(void) { return test_func(); }
