int test_func(void) {
    int v0 = 76;
    int v1 = 20;
    int v2 = 100;
    int v3 = 53;
    int i;
    v1 = v1 + v0;
    v0 = v0 - v1;
    v1 = v1 * 5;
    return v0;
}
int main(void) { return test_func(); }
