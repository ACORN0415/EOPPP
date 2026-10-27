int test_func(void) {
    int v0 = 83;
    int v1 = 16;
    int v2 = 70;
    int v3 = 96;
    int v4 = 61;
    int v5 = 79;
    int v6 = 58;
    int v7 = 92;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v5;
    }
    v7 = v7 + v7;
    return v0;
}
int main(void) { return test_func(); }
