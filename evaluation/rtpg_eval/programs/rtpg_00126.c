int test_func(void) {
    int v0 = 76;
    int v1 = 51;
    int v2 = 17;
    int v3 = 44;
    int v4 = 64;
    int v5 = 37;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v5;
    }
    v0 = v0 * 9;
    return v0;
}
int main(void) { return test_func(); }
