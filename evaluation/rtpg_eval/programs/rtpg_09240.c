int test_func(void) {
    int v0 = 88;
    int v1 = 18;
    int v2 = 59;
    int v3 = 44;
    int v4 = 29;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v2;
    }
    v0 = v0 * 2;
    v4 = 90;
    v4 = v4 + v2;
    return v0;
}
int main(void) { return test_func(); }
