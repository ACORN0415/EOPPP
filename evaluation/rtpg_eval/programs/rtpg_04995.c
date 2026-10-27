int test_func(void) {
    int v0 = 43;
    int v1 = 56;
    int v2 = 72;
    int i;
    v0 = v0 - v2;
    v2 = 38;
    v1 = v1 * 2;
    return v0;
}
int main(void) { return test_func(); }
