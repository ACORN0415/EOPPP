int test_func(void) {
    int v0 = 76;
    int v1 = 86;
    int v2 = 5;
    int v3 = 60;
    int i;
    v0 = v0 * 8;
    v3 = v3 - v1;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
