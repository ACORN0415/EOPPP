int test_func(void) {
    int v0 = 82;
    int v1 = 52;
    int v2 = 10;
    int v3 = 62;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v0;
    }
    v1 = 41;
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }
