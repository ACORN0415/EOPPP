int test_func(void) {
    int v0 = 31;
    int v1 = 11;
    int v2 = 91;
    int v3 = 12;
    int i;
    v2 = v2 + v0;
    v0 = v0 * 4;
    return v0;
}
int main(void) { return test_func(); }
