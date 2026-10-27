int test_func(void) {
    int v0 = 40;
    int v1 = 83;
    int v2 = 9;
    int v3 = 11;
    int i;
    v3 = v3 + v0;
    v3 = v3 - v0;
    v0 = v0 * 10;
    return v0;
}
int main(void) { return test_func(); }
