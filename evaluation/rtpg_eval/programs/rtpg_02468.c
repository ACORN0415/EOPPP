int test_func(void) {
    int v0 = 51;
    int v1 = 52;
    int v2 = 70;
    int v3 = 62;
    int i;
    v0 = 73;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 * 5;
    return v0;
}
int main(void) { return test_func(); }
