int test_func(void) {
    int v0 = 36;
    int v1 = 83;
    int v2 = 83;
    int i;
    v2 = v2 + v0;
    v1 = v1 * 8;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
