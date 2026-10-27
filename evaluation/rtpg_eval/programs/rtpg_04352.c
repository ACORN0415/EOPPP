int test_func(void) {
    int v0 = 19;
    int v1 = 79;
    int v2 = 57;
    int v3 = 47;
    int i;
    v3 = v3 - v1;
    v1 = v1 + v3;
    v0 = v0 * 8;
    return v0;
}
int main(void) { return test_func(); }
