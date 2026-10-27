int test_func(void) {
    int v0 = 83;
    int v1 = 79;
    int v2 = 34;
    int i;
    v1 = 88;
    v0 = v0 - v2;
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }
