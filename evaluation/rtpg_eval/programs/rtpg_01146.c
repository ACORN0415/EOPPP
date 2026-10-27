int test_func(void) {
    int v0 = 2;
    int v1 = 5;
    int v2 = 44;
    int i;
    v2 = v2 - v0;
    v0 = 76;
    v1 = v1 * 5;
    return v0;
}
int main(void) { return test_func(); }
