int test_func(void) {
    int v0 = 84;
    int v1 = 65;
    int v2 = 16;
    int v3 = 87;
    int v4 = 83;
    int v5 = 89;
    int v6 = 64;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v4;
    }
    v4 = v4 | v6;
    return v0;
}
int main(void) { return test_func(); }
