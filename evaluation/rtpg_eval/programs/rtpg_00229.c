int test_func(void) {
    int v0 = 57;
    int v1 = 80;
    int v2 = 40;
    int v3 = 49;
    int i;
    v3 = v3 - v0;
    v2 = v2 + v1;
    v0 = v0 * 8;
    return v0;
}
int main(void) { return test_func(); }
