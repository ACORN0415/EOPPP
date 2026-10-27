int test_func(void) {
    int v0 = 89;
    int v1 = 88;
    int v2 = 43;
    int v3 = 27;
    int v4 = 18;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
