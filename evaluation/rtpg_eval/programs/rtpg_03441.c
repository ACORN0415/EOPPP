int test_func(void) {
    int v0 = 16;
    int v1 = 43;
    int v2 = 100;
    int i;
    v1 = v1 * 5;
    v0 = v0 | v1;
    return v0;
}
int main(void) { return test_func(); }
