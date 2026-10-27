int test_func(void) {
    int v0 = 33;
    int v1 = 55;
    int v2 = 79;
    int v3 = 85;
    int v4 = 33;
    int v5 = 34;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 | v3;
    return v0;
}
int main(void) { return test_func(); }
