int test_func(void) {
    int v0 = 77;
    int v1 = 75;
    int v2 = 62;
    int v3 = 94;
    int v4 = 38;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
