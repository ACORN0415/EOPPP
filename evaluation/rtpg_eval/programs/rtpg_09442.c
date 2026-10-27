int test_func(void) {
    int v0 = 73;
    int v1 = 77;
    int v2 = 79;
    int v3 = 96;
    int v4 = 17;
    int v5 = 4;
    int v6 = 45;
    int v7 = 92;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v7;
    }
    v6 = 64;
    v7 = v7 + v4;
    return v0;
}
int main(void) { return test_func(); }
