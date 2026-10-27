int test_func(void) {
    int v0 = 78;
    int v1 = 65;
    int v2 = 58;
    int v3 = 61;
    int v4 = 28;
    int i;
    v2 = 45;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 * 4;
    return v0;
}
int main(void) { return test_func(); }
