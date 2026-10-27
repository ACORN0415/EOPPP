int test_func(void) {
    int v0 = 45;
    int v1 = 41;
    int v2 = 91;
    int v3 = 26;
    int v4 = 27;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
