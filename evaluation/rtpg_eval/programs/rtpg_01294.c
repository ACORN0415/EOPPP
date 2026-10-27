int test_func(void) {
    int v0 = 28;
    int v1 = 47;
    int v2 = 66;
    int v3 = 65;
    int v4 = 18;
    int i;
    v2 = v2 * 2;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
