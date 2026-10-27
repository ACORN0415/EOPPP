int test_func(void) {
    int v0 = 38;
    int v1 = 58;
    int v2 = 43;
    int v3 = 85;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 | v0;
    return v0;
}
int main(void) { return test_func(); }
