int test_func(void) {
    int v0 = 1;
    int v1 = 40;
    int v2 = 96;
    int v3 = 37;
    int v4 = 40;
    int v5 = 74;
    int v6 = 70;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    v3 = 61;
    v5 = v5 + v3;
    v2 = v2 * 5;
    return v0;
}
int main(void) { return test_func(); }
