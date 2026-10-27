int test_func(void) {
    int v0 = 86;
    int v1 = 55;
    int v2 = 75;
    int i;
    v0 = 87;
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
