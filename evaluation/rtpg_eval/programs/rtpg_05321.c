int test_func(void) {
    int v0 = 73;
    int v1 = 64;
    int v2 = 74;
    int i;
    v0 = v0 * 6;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
