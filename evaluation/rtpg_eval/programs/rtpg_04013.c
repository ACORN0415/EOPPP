int test_func(void) {
    int v0 = 60;
    int v1 = 33;
    int v2 = 27;
    int v3 = 40;
    int v4 = 33;
    int v5 = 82;
    int v6 = 68;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v5;
    }
    v1 = v1 * 3;
    v3 = v3 + v5;
    return v0;
}
int main(void) { return test_func(); }
