int test_func(void) {
    int v0 = 77;
    int v1 = 47;
    int v2 = 7;
    int v3 = 5;
    int i;
    v0 = v0 + v3;
    v3 = v3 * 5;
    return v0;
}
int main(void) { return test_func(); }
