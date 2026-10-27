int test_func(void) {
    int v0 = 40;
    int v1 = 51;
    int v2 = 65;
    int v3 = 70;
    int v4 = 49;
    int v5 = 92;
    int v6 = 73;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    v4 = v4 * 10;
    return v0;
}
int main(void) { return test_func(); }
