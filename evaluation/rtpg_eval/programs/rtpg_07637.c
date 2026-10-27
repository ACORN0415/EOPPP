int test_func(void) {
    int v0 = 5;
    int v1 = 41;
    int v2 = 77;
    int i;
    v0 = v0 * 5;
    v0 = v0 - v1;
    v1 = v1 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
