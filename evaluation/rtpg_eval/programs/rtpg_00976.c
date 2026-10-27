int test_func(void) {
    int v0 = 70;
    int v1 = 47;
    int v2 = 80;
    int v3 = 66;
    int v4 = 93;
    int v5 = 96;
    int v6 = 87;
    int v7 = 61;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v3;
    }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
