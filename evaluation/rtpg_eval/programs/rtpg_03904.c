int test_func(void) {
    int v0 = 99;
    int v1 = 77;
    int v2 = 5;
    int v3 = 6;
    int i;
    v2 = v2 * 7;
    v0 = v0 + v2;
    v1 = 4;
    return v0;
}
int main(void) { return test_func(); }
